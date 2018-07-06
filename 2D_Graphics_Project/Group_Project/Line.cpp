/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Line::Line()
{
    shapeId = 0;
    shapeType = "Line";
    shapeDimensions.resize(4);
    penColor = -1; // these probably need to be default values instead of 1 just place holder for now
    penWidth = -1; // ^^
    penStyle = -1; // ^^
    penCapStyle = -1;
    penJoinStyle = -1;
}

Line::Line(int shapeId, string shapeType, vector<int> shapeDimensions, Qt::GlobalColor penColor, 
           int penWidth, Qt::PenStyle, penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle)
           :Shape(shapeId, shapeType, shapeDimensions, penColor, penWidth, penStyle,
                  penCapStyle, penJoinStyle)
{
}

void Line::Draw() override
{
    //painter - set the painter object penstyle pencapstyle ... before drawing 
    painter.drawLine(shapeDimensions[0], shapeDimensions[1], shapeDimensions[2], shapeDimensions[3]);

}

void Line::Move() override
{

}

void Line::Perimeter() override
{

}

void Line::Area() override
{

}