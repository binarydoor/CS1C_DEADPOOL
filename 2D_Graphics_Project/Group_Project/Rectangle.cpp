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

Rectangle::Rectangle(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions)
                    :Shape(shapeId, shapeType, pen, brush)
                    ,shapeDimensions(shapeDimensions)
{
}

Rectangle::~Rectangle()
{

}

void Rectangle::Draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    //draw the rectangle

    GetQPainter().restore();
}

void Rectangle::Move() override
{
    //implment move similar to draw move coordinates
}

int Rectangle::Perimeter() override
{

}

float Rectangle::Area() override
{

}