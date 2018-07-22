#include "seconddialog.h"
#include "ui_seconddialog.h"
#include <QPainter>

SecondDialog::SecondDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondDialog)
{
//    renderArea = new RenderArea;
    ui->setupUi(this);

    ui->penWidthSpinBox->setMinimum(0);
    ui->penWidthSpinBox->setMaximum(20);

    ui->penStyleComboBox->addItem("NoPen");
    ui->penStyleComboBox->addItem("SolidLine");
    ui->penStyleComboBox->addItem("DashLine");
    ui->penStyleComboBox->addItem("DotLine");
    ui->penStyleComboBox->addItem("DashDotLine");
    ui->penStyleComboBox->addItem("DashDotDotLine");

    ui->penCapComboBox->addItem("FlatCap");
    ui->penCapComboBox->addItem("SquareCap");
    ui->penCapComboBox->addItem("RoundCap");

    ui->penJoinComboBox->addItem("MiterJoin");
    ui->penJoinComboBox->addItem("BevelJoin");
    ui->penJoinComboBox->addItem("RoundJoin");

    ui->penColorComboBox->addItem("White");
    ui->penColorComboBox->addItem("Black");
    ui->penColorComboBox->addItem("Red");
    ui->penColorComboBox->addItem("Green");
    ui->penColorComboBox->addItem("Blue");
    ui->penColorComboBox->addItem("Cyan");
    ui->penColorComboBox->addItem("Magenta");
    ui->penColorComboBox->addItem("Yellow");
    ui->penColorComboBox->addItem("Gray");

    ui->brushColorComboBox->addItem("White");
    ui->brushColorComboBox->addItem("Black");
    ui->brushColorComboBox->addItem("Red");
    ui->brushColorComboBox->addItem("Green");
    ui->brushColorComboBox->addItem("Blue");
    ui->brushColorComboBox->addItem("Cyan");
    ui->brushColorComboBox->addItem("Magenta");
    ui->brushColorComboBox->addItem("Yellow");
    ui->brushColorComboBox->addItem("Gray");


    ui->brushStyleComboBox->addItem("SolidPattern");
    ui->brushStyleComboBox->addItem("HorPattern");
    ui->brushStyleComboBox->addItem("VerPattern");
    ui->brushStyleComboBox->addItem("NoBrush");

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
//    painter.drawText(10, 10, "Samuel Vilchez"); // just a test

}
