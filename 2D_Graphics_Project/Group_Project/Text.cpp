/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"

Text::Text()
{
    textString = "Default";
    shapeId = 0;
    
}

Text::Text(string textString, Qt::GlobalColor textColor, Qt::AlignmentFlag textAlignment,
           int textPointSize, string textFontFamily, Qt::Style textFontStyle, 
           Qt::Weight textFontWeight, int shapeId, QPen pen, QBrush brush, 
           vector<int> shapeDimensions)
           :Shape(shapeId, pen, brush, shapeDimensions)
           ,textString(textString)
           ,textColor(textColor)
           ,textAlignment(textAlignment)
           ,textPointSize(textPointSize)
           ,textFontFamily(textFontFamily)
           ,textFontStyle(textFontStyle)
           ,textFontWeight(textFontWeight)
{
    height = shapeDimensions[2];
    length = shapeDimensions[3];
}

void Text::Draw() override
{
    QRect rec(shapeDimensions[0], shapeDimensions[1], length, height);

    GetQPainter().setPen(GetPen());
    GetQPainter().setBrush(GetBrush());

    GetQPainter().save():

    GetQPainter().drawRect(rect); // just to show the bounds
    GetQPainter().drawText(rect, Qt::AlignCenter, textString);

    GetQPainter().restore();
}

void Text::Move() override
{

}

int Text::Perimeter() override
{
    // ?
}

float Text::Area() override
{
    // ?
}