#ifndef RENDERAREA_H
#define RENDERAREA_H

#include<QPainter>
#include<QWidget>
#include<QPen>
#include<QBrush>

class RenderArea:public QWidget
{

    public:



        void paintEvent(QPaintEvent *event);

    private:
        RenderArea *canvas;

};

#endif // RENDERAREA_H
