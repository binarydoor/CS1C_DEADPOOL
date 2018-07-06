/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef SHAPE_H_
#define SHAPE_H_

#include"MyHeader.h"

class Shape
{
    //overload equality operator and less than relational operator will compare shape object id's
    public: 
        /****************************
         * CONSTRUCTOR & DESTRUCTOR *
         ****************************/
        Shape();
        Shape(int shapeId, string shapeType, vector<int> shapeDimensions, Qt::GlobalColor penColor, 
              int penWidth, Qt::PenStyle, penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle);
        virtual ~Shape();

        virtual void Draw() = 0;
        virtual void Move() = 0;
        virtual int Perimeter() = 0;
        virtual float Area() = 0;

    private:
        QPainter painter;
        int shapeId;   
        string shapeType;
        vector<int> shapeDimensions;
        Qt::GlobalColor penColor;
        int penWidth;
        Qt::PenStyle penStyle;
        Qt::PenCapStyle penCapStyle;
        Qt::PenJoinStyle penJoinStyle; 
};

#endif