#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "renderarea.h"
#include <QPainter>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    showAdminAccess = false;
    //Pass in this to display on mainwindow
    renderArea = new RenderArea(this);

    ui->setupUi(this);

    renderArea->move(5, 25);

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

    ui->textBrowser_2->hide();


//    ui->tabWidget->hide(); //hides the tab widget

//  ui->Canvas->setBackgroundRole(QPalette::Base);
//  ui->Canvas->setAutoFillBackground(true);
//  mainLayout->setOriginCorner(Qt::Corner());

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

void MainWindow::ShowTabWidget()
{
    ui->tabWidget->show();
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
        ui->tabWidget->show();
    }
}

void MainWindow::on_actionShape_Properties_triggered()
{
    //Users/vilchez/Documents/Github/CS1C Group Project/CS1C_DEADPOOL/QtProject/Deadpool/shapes.txt
    QFile file("/Users/vilchez/Documents/Github/CS1C Group Project/CS1C_DEADPOOL/QtProject/Deadpool/shapes.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);
    ui->textBrowser_2->show();
    ui->textBrowser_2->setText(in.readAll());

}

void MainWindow::on_pushButtonMove_clicked()
{
    int x;
    int y;
    int id;

    id = (ui->shapeIdLineEdit->text()).split(" ")[0].toInt();
    x = (ui->lineEditX->text()).split(" ")[0].toInt();
    y = (ui->lineEditY->text()).split(" ")[0].toInt();

    if(x >= 0 && y >= 0 && id >= 0)
    {
        for(int index = 0; index < 10; index++)
        {
            //implement move use vector to check id
            //once id is found call the move function
            //if id is not found display warning box
            //or simply do nothing
        }
    }
    else
    {
        QMessageBox::warning(this, "Move Shape", "Invalid values provided");

    }
}
