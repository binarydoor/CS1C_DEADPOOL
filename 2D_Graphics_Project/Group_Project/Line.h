/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef LINE_H_
#define LINE_H_

#include"MyHeader.h"

class Line: public Shape 
{
    public:
        Line();
        Line(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions);
        ~Line();

        void Draw() override;
        void Move(int x, int y) override;
        int Perimeter() override;  // no actual implementation
        float Area() override;     // no actual implementation

    private:
        QPoint pointBegin;
        QPoint pointEnd;
};


#endif 