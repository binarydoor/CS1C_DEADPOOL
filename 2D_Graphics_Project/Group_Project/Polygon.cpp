/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Polygon::Polygon()
{
    shapeId = 0;
    shapeType = "Polygon";
    //initialize polygon
}

Polygon::Polygon(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions)
                 :Shape(shapeId, shapeType, pen, brush)
                 ,shapeDimensions(shapeDimensions)
{
}

void Polygon::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    //draw the polygon

    GetQPainter().restore();
}

void Polygon::Move() override
{

}

int Polygon::Perimeter() override
{

}

float Polygon::Area() override
{

}

