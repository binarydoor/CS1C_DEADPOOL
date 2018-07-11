#ifndef RENDERAREA_H
#define RENDERAREA_H

#include<QPainter>
#include<QWidget>
#include<QPen>
#include<QBrush>

class RenderArea:public QWidget
{




    protected:
        void paintEvent(QPaintEvent *event) override;


};

#endif // RENDERAREA_H
