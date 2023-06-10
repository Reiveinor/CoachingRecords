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
