/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

//default constructor
Ellipse::Ellipse()
{
    shapeId = 0;
    shapeType = "Ellipse";
    shapeDimensions.resize(ELLIPSE_DIM_SIZE);
}

//alternate constructor 
//note shape dimensions should be created as temp and passed in
// as well as pen and brush refrence qpen class and qbrush class
Ellipse::Ellipse(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions,
                 int a, int b)
                :Shape(shapeId, shapeType, pen, brush)
                ,shapeDimensions(shapeDimensions)
{
    majorAxis = a;
    semiMinorAxis = b;
}

void Ellipse::SetNewMoveCoordinate(int x, int y)
{
    //will only change the first coordinate not change the shape
    shapeDimensions[0] = x;
    shapeDimensions[1] = y;
}

void Ellipse::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    
    GetQPainter().drawEllipse(shapeDimensions[0], shapeDimensions[1], majorAxis, semiMinorAxis);

    GetQPainter().restore();
}

void Ellipse::Move() override
{
    //be sure to change coordinates before calling move method
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    
    GetQPainter().drawEllipse(shapeDimensions[0], shapeDimensions[1], majorAxis, semiMinorAxis);

    GetQPainter().restore();
}

int Ellipse::Perimeter() override
{
    // given the major/minor axis calculate perimeter
    // calculate circumference
}

float Ellipse::Area() override
{
    float pi = 3.14;
    float area;

    area = pi * majorAxis * semiMinorAxis
    // given the major/minor axis calculate area

    return area;
}