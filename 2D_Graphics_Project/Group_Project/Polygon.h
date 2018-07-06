/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An
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
        Polygon(int shapeId, string shapeType, vector<int> shapeDimensions, Qt::GlobalColor penColor, 
                int penWidth, Qt::PenStyle, penStyle, Qt::PenCapStyle penCapStyle, 
                Qt::PenJoinStyle penJoinStyle, Qt::GlobalColor brushColor, Qt::BrushStyle brushStyle);
        ~Polygon();

        void Draw() override;
        void Move() override;
        int Perimeter() override;
        float Area() override;

    private:
        Qt::GlobalColor brushColor;
	    Qt::BrushStyle brushStyle;
};


#endif 