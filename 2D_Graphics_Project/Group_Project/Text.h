/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef TEXT_H_
#define TEXT_H_

#include"MyHeader.h"

class Text: public Shape
{
    public: 
        Text();
        Text(QPaintDevice *device, string textString, Qt::GlobalColor textColor, Qt::AlignmentFlag textAlignment,
             int textPointSize, string textFontFamily, Qt::Style textFontStyle, 
             Qt::Weight textFontWeight, int shapeId, QPen pen, QBrush brush, 
             vector<int> shapeDimensions);
        ~Text();

        void Draw() override;
        void Move(int x, int y) override;
        int Perimeter() override;
        float Area() override;

    private:
        string textString;
        int height;
        int width;
        Qt::GlobalColor textColor;
	    Qt::AlignmentFlag textAlignment;
	    int textPointSize;
	    string textFontFamily;
	    Qt::Style textFontStyle;
	    Qt::Weight textFontWeight;
};


#endif 