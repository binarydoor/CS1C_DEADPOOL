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
    shapeType = "Line";
    // penColor = -1; // these probably need to be default values instead of 1 just place holder for now
    // penWidth = -1; // ^^
    // penStyle = -1; // ^^
    // penCapStyle = -1;
    // penJoinStyle = -1;
}

Line::Line(int shapeId, string shapeType, QPen pen, QBrush brush, QPoint pointBegin, QPoint pointEnd)
           :Shape(shapeId, shapeType, pen, brush)
           ,pointBegin(pointBegin)
           ,pointEnd(pointEnd)
{
}

void Line::Draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    //draw the line
    GetQPainter().drawline(pointBegin, pointEnd);

    GetQPainter().restore();
}

void Line::Move() override
{
    //implement move
}

void Line::Perimeter() override
{
    //implement perimeter
}

void Line::Area() override
{
    //implement area
}