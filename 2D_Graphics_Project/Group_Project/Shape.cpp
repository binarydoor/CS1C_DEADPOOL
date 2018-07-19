/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Shape::Shape()
{
    shapeId = 0;
}

Shape::Shape(int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions)
:shapeId(shapeId)
,shapeDimensions(shapeDimensions)
{
    this->pen = pen;
    this->brush = brush;
}

Shape::~Shape()
{
}

void Shape::SetPen(const QPen &pen)
{
    this->pen = pen;
}

void Shape::SetBrush(const QBrush &brush)
{
    this->brush = brush;
}

void Rectangle::SetXY(int x, int y)
{
    shapeDimensions[0] = x;
    shapeDimensions[1] = y;
}

QPen Shape::GetPen() const
{
    return pen;
}

QBrush Shape::GetBrush() const
{
    return brush;
}

QPainter& Shape::GetQPainter();
{
    return painter; 
}