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
}

//alternate constructor shapeDimensions should only have the first coordinate
Rectangle::Rectangle(int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions,
                     int l, int w)
                    :Shape(shapeId, pen, brush, shapeDimensions)
{
    height = l;
    width = w;
}

Rectangle::~Rectangle()
{
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
    //are we just moving x y coordinates then drawing again
}

int Rectangle::Perimeter() override
{
    return (2 * length) + (2 * width);
}

float Rectangle::Area() override
{
    return (length * width);
}