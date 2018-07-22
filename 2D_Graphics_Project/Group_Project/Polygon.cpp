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
    points = nullptr;
    numOfPoints = 0;
    //initialize polygon
}

//when creating a polygon have a sequence of nth coordinates because we dont know how big our vector is
// will be depend on the user (input file in our case) (x1, y1, x2, y2 ... xN, yN)
Polygon::Polygon(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions)
                 :Shape(device, shapeId, pen, brush, shapeDimensions)
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

void Polygon::Move(int x, int y) override
{
    SetXY(x, y);

    //redraws the polygon after deleting previous points array
    draw();
}

double Polygon::Perimeter() override
{
    double sum = 0;
    for (int index = 0; index < numOfPoints - 1; index++)
    {
        QLine myCurrentLine(points[index], points[index + 1]);
        double a = myCurrentLine.dx();
        double b = myCurrentLine.dy();
        double cSquared = ( pow(a, 2.0) + pow(b, 2.0) );
        double c = sqrt(cSquared);
        
        sum = sum + c;
    }

    myCurrentLine(points[0], points[numOfPoints - 1]);
    a = myCurrentLine.dx();
    b = myCurrentLine.dy();
    cSquared = ( pow(a, 2.0) + pow(b, 2.0));
    c = sqrt(cSquared);
    sum += c;

    // attempt to calculate perimeter
    return sum; // so it will compile
}

double Polygon::Area() override
{
    // attempt to calculate area
    return 1; // so it will compile
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

