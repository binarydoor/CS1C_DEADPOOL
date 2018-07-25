#include "renderarea.h"
#include <QWidget>
#include <QPainter>

//! [0]
RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    setFixedSize(sizeHint());
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
    painter.drawLine(10, 10, 100, 100); // just a test
}
