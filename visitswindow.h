#ifndef VISITSWINDOW_H
#define VISITSWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery> //интерфейс между QT и DB
#include <QSqlTableModel> // для отображения таблицы в tableview

namespace Ui {
class VisitsWindow;
}

class VisitsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VisitsWindow(QWidget *parent = nullptr);
    ~VisitsWindow();

private slots:
    void on_Add_Button_clicked();

    void on_delete_Button_clicked();

    void on_visits_tableView_clicked(const QModelIndex &index);

    void on_update_Button_clicked();

private:
    Ui::VisitsWindow *ui;

    QSqlDatabase DBvisits_object;
    QSqlQuery *queryVisits_object;
    QSqlTableModel *visitsModel;
    int row; // номер строки
};

#endif // VISITSWINDOW_H
