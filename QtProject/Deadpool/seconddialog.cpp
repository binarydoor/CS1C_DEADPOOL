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
    admin = false;
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

bool SecondDialog::GetAdminAccess()
{
    return admin;
}

void SecondDialog::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "guest" && password == "guest")
    {
        QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
    }
    else if(username == "admin" && password == "admin")
    {
        QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        admin = true;
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username and password is not correct");
    }

}
