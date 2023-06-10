#ifndef VISITSWINDOW_H
#define VISITSWINDOW_H

#include <QMainWindow>

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
};

#endif // VISITSWINDOW_H
