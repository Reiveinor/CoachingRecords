#include "modelmain.h"
#include "ui_modelmain.h"
#include <visitswindow.h>

ModelMain::ModelMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ModelMain)
{
    ui->setupUi(this);
}

ModelMain::~ModelMain()
{
    delete ui;
}

