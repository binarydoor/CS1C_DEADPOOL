#include "mainwindow.h"
#include "renderarea.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setShape();
    w.show();

    return a.exec();
}
