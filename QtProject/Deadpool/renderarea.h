#ifndef RENDERAREA_H
#define RENDERAREA_H

#include<QPainter>
#include<QWidget>
#include<QPen>
#include<QBrush>

class RenderArea:public QWidget
{

    public:
        RenderArea(QWidget *parent = 0);

        QSize minimumSizeHint() const override;
        QSize sizeHint() const override;


        void paintEvent(QPaintEvent *event);

    private:

};

#endif // RENDERAREA_H
