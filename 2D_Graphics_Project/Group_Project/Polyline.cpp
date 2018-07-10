/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/

#include"MyHeader.h"

Polyline::Polyline()
{

}

Polyline::Polyline(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions)
                  :Shape(shapeId, shapeType, pen, brush)
                  ,shapeDimensions(shapeDimensions)
{

}

Polyline::~Polyline()
[
    
]

void Polyline::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setBrush(GetBrush());

    GetQPainter().save();

    //draw the polyline (passing in the points of the vector)

    GetQPainter().restore();

}

void Polyline::Move() override
{

}

int Polyline::Perimeter() override
{

}

float Polyline::Area() override
{

}