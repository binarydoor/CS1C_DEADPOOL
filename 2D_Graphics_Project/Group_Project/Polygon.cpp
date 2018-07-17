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
    points = nullptr;
    numOfPoints = 0;
    //initialize polygon
}

//when creating a polygon have a sequence of nth coordinates because we dont know how big our vector is
// will be depend on the user (input file in our case) (x1, y1, x2, y2 ... xN, yN)
Polygon::Polygon(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions)
                 :Shape(shapeId, shapeType, pen, brush)
                 ,shapeDimensions(shapeDimensions)
{
    SetPointsArray();
}

virtual Polygon::~Polygon()
{
    delete [] points;
}

void Polygon::ChangeDimensions(const vector<int>& xyPoints)
{
    shapeDimensions = xyPoints;
}

void Polygon::draw() override
{
    GetQPainter().setpen(GetPen());
    GetQPainter().setbrush(GetBrush());

    GetQPainter().save();

    GetQPatinet().drawPolygon(points, numOfPoints);

    GetQPainter().restore();
}

void Polygon::Move() override
{
    SetPointsArray(); // deletes previous points array
                      // creates a new array of points 

    //redraws the polygon after deleting previous points array
    draw();
}

int Polygon::Perimeter() override
{
    // ?
}

float Polygon::Area() override
{
    // ?
}

void Polygon::SetPointsArray()
{
    int count;
    //dynamically allocates an array of points for polygon
    if(points != nullptr)
    {
        //means points points to an array already 
        //clear array before allocating a new array
        delete [] points;
    }

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

