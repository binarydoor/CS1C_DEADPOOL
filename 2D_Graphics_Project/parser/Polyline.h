/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef POLYLINE_H_
#define POLYLINE_H_

#include"MyHeader.h"

class Polyline: public Shape
{
    public: 
        Polyline()
        Polyline(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions);
        ~Polyline();

        void SetDimensions(const vector<int>& xyPoints); 

        void Draw() override;
        void Move(int x, int y) override;
        double Perimeter() override;
        double Area() override;

    protected:
        void SetPointsArray();
        
    private:
        QPoint *points; // similar to polygon
        int numOfPoints;
};


#endif