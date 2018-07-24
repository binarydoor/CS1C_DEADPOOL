#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = 0);
    ~SecondDialog();

private:
    Ui::SecondDialog *ui;

private slots:
    void on_pushButton_login_clicked();
    void on_pushButtonAdmin_clicked();
};

#endif // SECONDDIALOG_H
