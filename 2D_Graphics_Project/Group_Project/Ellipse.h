/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include"MyHeader.h"

const int ELLIPSE_DIM_SIZE = 2;

class Ellipse: public Shape
{
    public: 
        Ellipse();
        Ellipse(int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions);
        ~Ellipse();

        void Draw() override;
        void Move() override;
        int Perimeter() override;
        float Area() override;
    
    private:
        int majorAxis
        int semiMinorAxis;
};



#endif 