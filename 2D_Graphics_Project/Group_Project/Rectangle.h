/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include"MyHeader.h"

class Rectangle: public Shape
{
    public: 
        Rectangle();
        Rectangle(int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions,
                  int l, int w);
        ~Rectangle();

        void Draw() override;
        void Move() override;
        int Perimeter() override;
        float Area() override;

    private:
        int height;
        int width;
};

#endif 