#include "MyHeader.h"
#include "vector_template.h"

void importFile(QPaintDevice*, vector<Shape*>&, const string&);
//void importFile(vector<Shape>&, const string&);

int whichData(const string&);

int* getDimensions(const string&, int&);

Qt::GlobalColor whichColor(const string&);

Qt::PenStyle whichPenStyle(const string&);

Qt::PenCapStyle whichPenCapStyle(const string&);

Qt::PenJoinStyle whichPenJoinStyle(const string&);

Qt::BrushStyle whichBrushStyle(const string &);

Qt::AlignmentFlag whichAlignmentFlag(const string &);

QFont::Style whichStyle(const string &)

QFont::Weight whichWeight(const string &str);
