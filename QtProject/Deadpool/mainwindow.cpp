#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include "renderarea.h"
#include <QPainter>
#include<QMessageBox>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    showAdminAccess = false;
    renderArea = new RenderArea; //what i commented
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

    QGridLayout *mainLayout = new QGridLayout;
//! [9] //! [10]
    mainLayout->setColumnStretch(0, 1);
    mainLayout->setColumnStretch(3, 1);
    mainLayout->addWidget(renderArea, 0, 0, 1, 4);

//    setCentralWidget(renderArea);

//    mainLayout->setOriginCorner(Qt::Corner());
//    setLayout(mainLayout);


    setWindowTitle("2D Graphics Modeler");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ToggleAdminAccess()
{
    if(showAdminAccess == false)
    {
        showAdminAccess = true;
    }
    else
    {
        showAdminAccess = false;
    }
}

//void MainWindow::setShape(myStd::vector<Shape::Shape*> source)
//{
//    ui->renderCanvas->setShape(source);
//}

void MainWindow::on_actionLogin_triggered()
{
    secDialog = new SecondDialog(this);
    secDialog->show();
    showAdminAccess = secDialog->GetAdminAccess();
    if(showAdminAccess == true)
    {
        ui->tabWidget->removeTab(1);
    }
}
