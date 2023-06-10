#include "modelmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelMain w;
    w.show();
    return a.exec();
}
