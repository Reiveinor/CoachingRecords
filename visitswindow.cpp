#include "visitswindow.h"
#include "ui_visitswindow.h"

VisitsWindow::VisitsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VisitsWindow)
{
    ui->setupUi(this);
}

VisitsWindow::~VisitsWindow()
{
    delete ui;
}
