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
        Polyline(int shapeId, string shapeType, QPen pen, QBrush brush, vector<int> shapeDimensions);
        ~Polyline();

        void Draw() override;
        void Move() override;
        int Perimeter() override;
        float Area() override;

    private: 
        vector<int> shapeDimensions(4);
};


#endif