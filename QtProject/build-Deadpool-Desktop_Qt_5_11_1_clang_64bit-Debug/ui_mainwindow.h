/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogin;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *shapeIdLabel2;
    QLineEdit *shapeIdLineEdit2;
    QPushButton *pushButtonMove;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditX;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditY;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *shapeIdLineEdit3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *penWidthSpinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *penStyleComboBox;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *penCapComboBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QComboBox *penJoinComboBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QComboBox *penColorComboBox;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *shapeTypeLabel;
    QComboBox *shapeComboBox;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QComboBox *brushColorComboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QComboBox *brushStyleComboBox;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonModify;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1387, 701);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QStringLiteral("actionLogin"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(1010, 40, 241, 601));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 0, 190, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        shapeIdLabel2 = new QLabel(layoutWidget_2);
        shapeIdLabel2->setObjectName(QStringLiteral("shapeIdLabel2"));

        horizontalLayout_3->addWidget(shapeIdLabel2);

        shapeIdLineEdit2 = new QLineEdit(layoutWidget_2);
        shapeIdLineEdit2->setObjectName(QStringLiteral("shapeIdLineEdit2"));

        horizontalLayout_3->addWidget(shapeIdLineEdit2);

        pushButtonMove = new QPushButton(tab_2);
        pushButtonMove->setObjectName(QStringLiteral("pushButtonMove"));
        pushButtonMove->setGeometry(QRect(100, 30, 113, 32));
        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 30, 71, 23));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditX = new QLineEdit(layoutWidget_3);
        lineEditX->setObjectName(QStringLiteral("lineEditX"));

        horizontalLayout_4->addWidget(lineEditX);

        layoutWidget_4 = new QWidget(tab_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 50, 71, 23));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditY = new QLineEdit(layoutWidget_4);
        lineEditY->setObjectName(QStringLiteral("lineEditY"));

        horizontalLayout_5->addWidget(lineEditY);

        layoutWidget_5 = new QWidget(tab_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 100, 192, 97));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        shapeIdLineEdit3 = new QLineEdit(layoutWidget_5);
        shapeIdLineEdit3->setObjectName(QStringLiteral("shapeIdLineEdit3"));

        horizontalLayout_6->addWidget(shapeIdLineEdit3);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        penWidthSpinBox = new QSpinBox(layoutWidget_5);
        penWidthSpinBox->setObjectName(QStringLiteral("penWidthSpinBox"));

        horizontalLayout_7->addWidget(penWidthSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        penStyleComboBox = new QComboBox(layoutWidget_5);
        penStyleComboBox->setObjectName(QStringLiteral("penStyleComboBox"));

        horizontalLayout_8->addWidget(penStyleComboBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        layoutWidget_6 = new QWidget(tab_2);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(20, 180, 191, 100));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget_6);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        penCapComboBox = new QComboBox(layoutWidget_6);
        penCapComboBox->setObjectName(QStringLiteral("penCapComboBox"));

        horizontalLayout_9->addWidget(penCapComboBox);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget_6);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        penJoinComboBox = new QComboBox(layoutWidget_6);
        penJoinComboBox->setObjectName(QStringLiteral("penJoinComboBox"));

        horizontalLayout_11->addWidget(penJoinComboBox);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_13 = new QLabel(layoutWidget_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_14->addWidget(label_13);

        penColorComboBox = new QComboBox(layoutWidget_6);
        penColorComboBox->setObjectName(QStringLiteral("penColorComboBox"));

        horizontalLayout_14->addWidget(penColorComboBox);


        verticalLayout_3->addLayout(horizontalLayout_14);

        layoutWidget_7 = new QWidget(tab_2);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 80, 196, 26));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        shapeTypeLabel = new QLabel(layoutWidget_7);
        shapeTypeLabel->setObjectName(QStringLiteral("shapeTypeLabel"));

        horizontalLayout_10->addWidget(shapeTypeLabel);

        shapeComboBox = new QComboBox(layoutWidget_7);
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->setObjectName(QStringLiteral("shapeComboBox"));

        horizontalLayout_10->addWidget(shapeComboBox);

        layoutWidget_8 = new QWidget(tab_2);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 400, 194, 139));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget_8);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        brushColorComboBox = new QComboBox(layoutWidget_8);
        brushColorComboBox->setObjectName(QStringLiteral("brushColorComboBox"));

        horizontalLayout_12->addWidget(brushColorComboBox);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_10 = new QLabel(layoutWidget_8);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_13->addWidget(label_10);

        brushStyleComboBox = new QComboBox(layoutWidget_8);
        brushStyleComboBox->setObjectName(QStringLiteral("brushStyleComboBox"));

        horizontalLayout_13->addWidget(brushStyleComboBox);


        verticalLayout_5->addLayout(horizontalLayout_13);

        pushButtonDelete = new QPushButton(layoutWidget_8);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));

        verticalLayout_5->addWidget(pushButtonDelete);

        pushButtonModify = new QPushButton(layoutWidget_8);
        pushButtonModify->setObjectName(QStringLiteral("pushButtonModify"));

        verticalLayout_5->addWidget(pushButtonModify);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(tab_3);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 193, 538));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_6->addWidget(textBrowser);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1387, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLogin);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLogin->setText(QApplication::translate("MainWindow", "Login", nullptr));
        shapeIdLabel2->setText(QApplication::translate("MainWindow", "Shape ID", nullptr));
        pushButtonMove->setText(QApplication::translate("MainWindow", "MOVE!", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "   X", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "   Y", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Shape ID", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Pen Width", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Pen Style", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Pen Cap", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Pen Join", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Pen Color", nullptr));
        shapeTypeLabel->setText(QApplication::translate("MainWindow", "Shape Type", nullptr));
        shapeComboBox->setItemText(0, QApplication::translate("MainWindow", "Line", nullptr));
        shapeComboBox->setItemText(1, QApplication::translate("MainWindow", "Polyline", nullptr));
        shapeComboBox->setItemText(2, QApplication::translate("MainWindow", "Rectangle", nullptr));
        shapeComboBox->setItemText(3, QApplication::translate("MainWindow", "Square", nullptr));
        shapeComboBox->setItemText(4, QApplication::translate("MainWindow", "Ellipse", nullptr));
        shapeComboBox->setItemText(5, QApplication::translate("MainWindow", "Circle", nullptr));
        shapeComboBox->setItemText(6, QApplication::translate("MainWindow", "Polygon", nullptr));
        shapeComboBox->setItemText(7, QApplication::translate("MainWindow", "Text", nullptr));

        label_12->setText(QApplication::translate("MainWindow", "Brush Color", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Brush Style", nullptr));
        pushButtonDelete->setText(QApplication::translate("MainWindow", "DELETE!", nullptr));
        pushButtonModify->setText(QApplication::translate("MainWindow", "CREATE!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Move and Modify", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Deadpool</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
""
                        "<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Contact us", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
