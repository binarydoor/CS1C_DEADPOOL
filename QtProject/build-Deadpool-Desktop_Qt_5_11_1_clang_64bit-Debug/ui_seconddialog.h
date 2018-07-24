/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondDialog
{
public:
    QPushButton *pushButtonAdmin;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;

    void setupUi(QDialog *SecondDialog)
    {
        if (SecondDialog->objectName().isEmpty())
            SecondDialog->setObjectName(QStringLiteral("SecondDialog"));
        SecondDialog->resize(399, 263);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SecondDialog->sizePolicy().hasHeightForWidth());
        SecondDialog->setSizePolicy(sizePolicy);
        pushButtonAdmin = new QPushButton(SecondDialog);
        pushButtonAdmin->setObjectName(QStringLiteral("pushButtonAdmin"));
        pushButtonAdmin->setGeometry(QRect(20, 0, 113, 32));
        groupBox = new QGroupBox(SecondDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 90, 221, 141));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 40, 199, 99));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(layoutWidget_2);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_13->addWidget(label_2);

        lineEdit_password = new QLineEdit(layoutWidget_2);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        horizontalLayout_13->addWidget(lineEdit_password);


        verticalLayout_6->addLayout(horizontalLayout_13);

        pushButton_login = new QPushButton(layoutWidget_2);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        verticalLayout_6->addWidget(pushButton_login);


        retranslateUi(SecondDialog);

        QMetaObject::connectSlotsByName(SecondDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondDialog)
    {
        SecondDialog->setWindowTitle(QApplication::translate("SecondDialog", "Dialog", nullptr));
        pushButtonAdmin->setText(QApplication::translate("SecondDialog", "Login Admin", nullptr));
        groupBox->setTitle(QApplication::translate("SecondDialog", "Log in", nullptr));
        label->setText(QApplication::translate("SecondDialog", "Username", nullptr));
        label_2->setText(QApplication::translate("SecondDialog", "Password", nullptr));
        pushButton_login->setText(QApplication::translate("SecondDialog", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondDialog: public Ui_SecondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
