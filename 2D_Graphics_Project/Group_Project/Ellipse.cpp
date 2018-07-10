/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Ellipse::Ellipse()
{
    shapeId = 0;
    shapeType = "Ellipse";
    shapeDimensions.resize(ELLIPSE_DIM_SIZE);
}

Ellipse::Ellipse(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions)
                :Shape(shapeId, shapeType, pen, brush)
                ,shapeDimensions(shapeDimensions)
{
}

void Ellipse::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    //draw the line
    GetQPainter().drawEllipse(shapeDimensions[0], shapeDimensions[1], shapeDimensions[2], shapeDimensions[3]);

    GetQPainter().restore();
}

void Ellipse::Move() override
{

}

int Ellipse::Perimeter() override
{

}

float Ellipse::Area() override
{

}