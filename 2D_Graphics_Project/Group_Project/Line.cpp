/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"
const int LINE_DIM_SIZE = 4; 

Line::Line()
{
    shapeId = 0;
}

Line::Line(int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions)
           :Shape(shapeId, pen, brush, shapeDimensions)
{
    pointBegin.setX(shapeDimensions[0]);
    pointBegin.setY(shapeDimensions[1]);
    pointEnd.setX(shapeDimensions[2]);
    pointEnd.setY(shapeDimensions[3]);
}

void Line::Draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    GetQPainter().drawline(pointBegin, pointEnd);

    GetQPainter().restore();
}

void Line::Move() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    GetQPainter().drawline(x1, y1, x2, y2);

    GetQPainter().restore();
}

void Line::Perimeter() override
{
    //line has no perimeter
    //dumby method
}

void Line::Area() override
{
    //line has no area
    //dumby method
}