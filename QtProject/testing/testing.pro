#-------------------------------------------------
#
# Project created by QtCreator 2018-07-10T18:52:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Deadpool
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    seconddialog.cpp \
    renderarea.cpp \
    parser2.cpp \
    Ellipse.cpp \
    Functions.cpp \
    groupProject.cpp \
    Line.cpp \
    Polygon.cpp \
    Polyline.cpp \
    Rectangle.cpp \
    Shape.cpp \
    Text.cpp

HEADERS += \
        mainwindow.h \
    renderarea.h \
    seconddialog.h \
    parser2.h \
    Ellipse.h \
    Line.h \
    MyHeader.h \
    Polygon.h \
    Polyline.h \
    Rectangle.h \
    Shape.h \
    Text.h \
    vector_template.h

FORMS += \
        mainwindow.ui \
    seconddialog.ui
