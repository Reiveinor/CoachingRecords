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
