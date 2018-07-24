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

class ShapeException
{
    public:
        ShapeException(): error{"invalid x and y"} {}
        ShapeException(string e) : error{e} {}
        string what() {return error;}
    private:
        string error;
};

class Shape
{
    //overload equality operator and less than relational operator will compare shape object id's
    bool operator == (const Shape& rhs) const;
    bool operator < (const Shape& rhs) const;

    public: 
        /****************************
         * CONSTRUCTOR & DESTRUCTOR *
         ****************************/
        Shape();
        Shape(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions);
        virtual ~Shape();

        void SetPen(const QPen &pen);
        void SetBrush(const QBrush &brush);

        void SetXY(int x, int y);

        QPen GetPen() const;
        QBrush GetBrush() const;

        virtual void Draw() = 0;
        virtual void Move(int x, int y) = 0;
        virtual double Perimeter() = 0;
        virtual double Area() = 0;

    protected:
        QPainter& GetQPainter();
        vector<int> shapeDimensions; // for now protected can change to get function if necessary
                                     // derived classes need access

    private:
        QPainter painter; // needs qpaintdevice instantiate in constructor
        int shapeId;
        QPen pen;
        QBrush brush;
};

#endif