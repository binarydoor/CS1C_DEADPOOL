#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "renderarea.h"
#include "seconddialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void ToggleAdminAccess();
    ~MainWindow();

private slots:

    void on_actionLogin_triggered();

private:
    Ui::MainWindow *ui;
    SecondDialog *secDialog;
    RenderArea *renderArea;
    bool showAdminAccess;
};

#endif // MAINWINDOW_H
