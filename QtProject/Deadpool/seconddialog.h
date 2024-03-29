#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    class MainWindow;
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = 0);
    bool GetAdminAccess();
    ~SecondDialog();

private:
    Ui::SecondDialog *ui;
    bool admin;

private slots:
    void on_pushButton_login_clicked();
};

#endif // SECONDDIALOG_H
