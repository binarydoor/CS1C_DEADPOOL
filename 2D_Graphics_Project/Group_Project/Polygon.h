/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef POLYGON_H_
#define POLYGON_H_

#include"MyHeader.h"

class Polygon: public Shape 
{
    public: 
        Polygon();
        Polygon(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions);
        virtual ~Polygon();

        //call change dimensions before move 
        void ChangeDimensions(const vector<int>& xyPoints);
        void Draw() override;
        void Move(int x, int y) override;
        double Perimeter() override;
        double Area() override;

    protected:
        //should only be called when moving an array or changing the polygon
        void SetPointsArray();

    private:
        QPoint *points; // array of points used to draw polygon
        int numOfPoints;
};


#endif 