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
    shapeDimensions.resize(ELLIPSE_DIM_SIZE);
}

//alternate constructor 
//note shape dimensions should be created as temp and passed in
// as well as pen and brush refrence qpen class and qbrush class
Ellipse::Ellipse(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions)
                :Shape(device, shapeId, shapeType, pen, brush, shapeDimensions)
{
    majorAxis = shapeDimensions[2];
    semiMinorAxis = shapeDimensions[3];
}

void Ellipse::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    
    GetQPainter().drawEllipse(shapeDimensions[0], shapeDimensions[1], majorAxis, semiMinorAxis);

    GetQPainter().restore();
}

void Ellipse::Move(int x, int y) override
{
    SetXY(x, y);
    //be sure to change coordinates before calling move method
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    
    GetQPainter().drawEllipse(shapeDimensions[0], shapeDimensions[1], majorAxis, semiMinorAxis);

    GetQPainter().restore();
}

double Ellipse::Perimeter() override
{
    float pi = 3.14; 
    double perimeter;

    perimeter = 2 * pi * sqrt( ((pow(majorAxis, 2.0)) + (pow(semiMinorAxis, 2.0))) / 2.0 );

    return perimeter; // converts to int in return for approximation only
}

double Ellipse::Area() override
{
    float pi = 3.14;
    float area;

    area = pi * majorAxis * semiMinorAxis
    // given the major/minor axis calculate area

    return area;
}