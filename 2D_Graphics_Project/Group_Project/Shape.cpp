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

Shape::Shape(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions)
:painter(device)
,shapeId(shapeId)
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
    try
    {
        if(x < 0 || y < 0)
        {
            throw ShapeException("x y has to be positive");
        }
        shapeDimensions[0] = x;
        shapeDimensions[1] = y;
    }
    catch(ShapeException obj)
    {
        cout << "In try catch block:" << obj.what() << endl;
    }
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

//overload equality operator and less than relational operator will compare shape object id's
bool Shape::operator == (const Shape& rhs) const
{
    return (shapeId == rhs.shapeId);
}

bool Shape::operator < (const Shape& rhs) const
{
    return (shapeId < rhs.shapeId);
}