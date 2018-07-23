#include "renderarea.h"

#include <QPainter>

//! [0]
RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(1000, 500);
}

QSize RenderArea::sizeHint() const
{
    return QSize(1000, 500);
}

//Paint event will happen in render area

void RenderArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawText(10, 10, "Samuel Vilchez"); // just a test
}
