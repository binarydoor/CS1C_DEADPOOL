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
    shapeId = 0;
    numOfPoints = 0;
    points = nullptr;
}

Polyline::Polyline(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions)
                  :Shape(device, shapeId, pen, brush, shapeDimensions)
{
    int count;

    numOfPoints = shapeDimensions.size() / 2;

    points = new QPoint[numOfPoints];

    count = 0;

    //fills the array of points
    for(int index = 0; index < shapeDimensions.size(); index++)
    {
        if(index % 2 == 0 && index != 0)
        {
            count++;
        }

        if(index % 2 == 0)
        {
            points[count].setX(shapeDimensions[index])
        }
        else
        {
            points[count].setY(shapeDimensions[index])
        }

    }
}

Polyline::~Polyline()
[
    delete [] points;
]

void Polyline::SetDimensions(const vector<int>& xyPoints)
{
    shapeDimensions = xyPoints;
}

void Polyline::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setBrush(GetBrush());

    GetQPainter().save();

    drawPolyline(points, numOfPoints);

    GetQPainter().restore();

}

void Polyline::Move(int x, int y) override
{
    SetXY(x, y);
    Draw();
}

double Polyline::Perimeter() override
{
    // has no perimeter dumby function 
    return -1; // error value returned
}

double Polyline::Area() override
{
    // has no area dumby function 
    return -1; // error value returned
}

void Polyline::SetPointsArray()
{
    int count;
    
    //dynamically allocates an array of points for polygon
    if(points != nullptr)
    {
        //means points points to an array already 
        //clear array before allocating a new array
        delete [] points;
    }

    points = new QPoint[shapeDimensions.size() / 2];

    count = 0;

    //fills the array of points
    for(int index = 0; index < shapeDimensions.size(); index++)
    {
        if(index % 2 == 0 && index != 0)
        {
            count++;
        }

        if(index % 2 == 0)
        {
            points[count].setX(shapeDimensions[index])
        }
        else
        {
            points[count].setY(shapeDimensions[index])
        }

    }
}