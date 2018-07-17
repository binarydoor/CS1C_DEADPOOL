/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Rectangle::Rectangle()
{
    shapeId = 0;
    shapeType = "Rectangle";
    //vector initialization
}

//alternate constructor shapeDimensions should only have the first coordinate
Rectangle::Rectangle(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions,
                     int l, int w)
                    :Shape(shapeId, shapeType, pen, brush)
                    ,shapeDimensions(shapeDimensions)
{
    height = l;
    width = w;
}

Rectangle::~Rectangle()
{
}

void Rectangle::SetXY(int x, int y)
{
    shapeDimensions[0] = x;
    shapeDimensions[1] = y;
}

void Rectangle::Draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    GetQPainter().drawRect(shapeDimensions[0], shapeDimensions[1], width, height);

    GetQPainter().restore();
}

void Rectangle::Move() override
{
    //implment move similar to draw move coordinates
}

int Rectangle::Perimeter() override
{
    return (2 * length) + (2 * width);
}

float Rectangle::Area() override
{
    return (length * width);
}