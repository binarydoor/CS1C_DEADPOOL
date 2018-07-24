#include "seconddialog.h"
#include "ui_seconddialog.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QPainter>

class RenderArea;

SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
    ui->setupUi(this);
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

void SecondDialog::on_pushButtonAdmin_clicked()
{

}

void SecondDialog::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test")
    {
        QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username and password is not correct");
    }
}
