#ifndef VISITSWINDOW_H
#define VISITSWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery> //интерфейс между QT и DB

namespace Ui {
class VisitsWindow;
}

class VisitsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VisitsWindow(QWidget *parent = nullptr);
    ~VisitsWindow();

private:
    Ui::VisitsWindow *ui;

    QSqlDatabase DBvisits_object;
    QSqlQuery *queryVisits_object;
};

#endif // VISITSWINDOW_H
