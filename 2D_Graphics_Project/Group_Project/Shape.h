/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An, Vee
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
    bool operator = (const Shape& rhs) const; 
    //overload equality operator and less than relational operator will compare shape object id's
    public: 
        /****************************
         * CONSTRUCTOR & DESTRUCTOR *
         ****************************/
        Shape();
        //professor had this in his code not really sure what it does thou
        // he had this as a parameter( QPaintDevice *device ) i did not include it because
        // i dont see any use of it. 
        Shape(/*QPaintDevice *device*/int shapeId, string shapeType, QPen pen, QBrush brush);
        virtual ~Shape();

        void SetPen(const QPen &pen);
        void SetBrush(const QBrush &brush);

        QPen GetPen() const;
        QBrush GetBrush() const;

        virtual void Draw() = 0;
        virtual void Move() = 0;
        virtual int Perimeter() = 0;
        virtual float Area() = 0;

    protected:
        QPainter GetQPainter();
        void PaintEvent(QPaintEvent *event);

    private:
        QPainter painter; // needs qpaintdevice ?
        int shapeId;   
        string shapeType;
        QPen pen;
        QBrush brush;
};

#endif