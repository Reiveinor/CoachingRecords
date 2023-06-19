#include "visitswindow.h"
#include "ui_visitswindow.h"


VisitsWindow::VisitsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VisitsWindow)
{
    ui->setupUi(this);
    DBvisits_object = QSqlDatabase::addDatabase("QSQLITE");
    DBvisits_object.setDatabaseName("./visitsDB.db");
    if(DBvisits_object.open())
    {
        qDebug("База данных открыта");
        //дописать сообзение в статус баре
        visitsModel = new QSqlTableModel(this, DBvisits_object);
        visitsModel->setTable("Visits");
        visitsModel->select();

        ui -> visits_tableView->setModel(visitsModel);
        //мод на отображение в таблице по размеру
        ui -> visits_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    }
    else
    {
        qDebug("При открытии базы данных произошла ошибка");
    }


}

VisitsWindow::~VisitsWindow()
{
    delete ui;
}

void VisitsWindow::on_Add_Button_clicked()
{
    visitsModel->insertRow(visitsModel->rowCount());
}


void VisitsWindow::on_delete_Button_clicked()
{
    visitsModel ->removeRow(row);
}


void VisitsWindow::on_visits_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void VisitsWindow::on_update_Button_clicked()
{
    visitsModel->select(); //метод обновляет данные в таблице
}

