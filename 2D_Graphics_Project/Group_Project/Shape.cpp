/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Shape::Shape()
{
    shapeId = 0;
    shapeType = "Empty";
    penColor = -1;
    penWidth = -1;
    penStyle = -1;
    penCapStyle = -1;
    penJoinStyle = -1;
}

Shape::Shape(int shapeId, string shapeType, vector<int> shapeDimensions, Qt::GlobalColor penColor, 
             int penWidth, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle)
             :shapeId(shapeId), shapeType(shapeType), shapeDimensions(shapeDimensions),
              penColor(penColor), penWidth(penWidth), penStyle(penStyle),
              penCapStyle(penCapStyle), penJoinStyle(penJoinStyle)
{
}

Shape::~Shape()
{
}