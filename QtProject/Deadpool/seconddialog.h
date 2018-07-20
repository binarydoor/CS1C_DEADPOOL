#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>
#include "renderarea.h"

namespace Ui {
class SecondDialog;
}

class SecondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondDialog(QWidget *parent = 0);
    ~SecondDialog();

private:
    RenderArea *renderArea;
    Ui::SecondDialog *ui;

    //my test code;
protected:
    void paintEvent(QPaintEvent *e);

};

#endif // SECONDDIALOG_H
