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
    shapeType = "Polyline";
    numOfPoints = 0;
    points = nullptr;
}

Polyline::Polyline(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions)
                  :Shape(shapeId, shapeType, pen, brush)
                  ,shapeDimensions(shapeDimensions)
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

//call before calling move
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

void Polyline::Move() override
{
    SetPointsArray();
    Draw();
}

int Polyline::Perimeter() override
{
    // ?
}

float Polyline::Area() override
{
    // ? 
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