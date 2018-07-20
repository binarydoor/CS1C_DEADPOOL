#include "seconddialog.h"
#include "ui_seconddialog.h"
#include <QPainter>

SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
//    renderArea = new RenderArea;
    ui->setupUi(this);
}

SecondDialog::~SecondDialog()
{
    delete ui;
}

//my test
void SecondDialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
//    QColor color;
//    color.setBlue(4);

//    QPen pen;
//    pen.setColor(color);
//    painter.setPen(pen);
    painter.drawText(10, 10, "Samuel Vilchez"); // just a test

}
