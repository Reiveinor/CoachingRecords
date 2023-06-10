#ifndef MODELMAIN_H
#define MODELMAIN_H

#include <QMainWindow>
#include <visitswindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class ModelMain; }
QT_END_NAMESPACE

class ModelMain : public QMainWindow
{
    Q_OBJECT

public:
    ModelMain(QWidget *parent = nullptr);
    ~ModelMain();

private slots:
    void on_Visits_pushButton_clicked();

private:
    Ui::ModelMain *ui;

    VisitsWindow visitsWindow_object;
};
#endif // MODELMAIN_H
