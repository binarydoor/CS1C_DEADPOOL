/*********************************************************
* GROUP : DEADPOOL
* 2D Graphics Project
* CLASS :CS1B
* SECTION : MTWTh: 1:00p - 4:35p
* Due Date : TBA
**********************************************************/

#include <fstream>

using namespace std;


// All the global enum in Qt scope (ie. Qt::PenStyle enum)
// Made the temporary namespace here so we can test the calling/assigning
namespace Qt
{
	enum GlobalColor {white, black, red, green, blue, cyna, magenta, yellow, gray};

	enum PenStyle {NoPen, SolidLine, DashLine, DotLine, DashDotLine, DashDotDotLine};

	enum PenCapStyle {FlatCap, SquareCap, RoundCap};

	enum PenJoinStyle {MiterJoin, BevelJoin, RoundJoin};

	enum GlobalColor {white, black, red, green, blue, cyan, magenta, yellow, gray};

	enum BrushStyle {SolidPattern, HorPattern, VerPattern, NoBrush};

	enum AlignmentFlag {AlignLeft, AlignRight, AlignTop, AlignBottom, AlignCente};

	enum Style {StyleNormal, StyleItalic, StyleOblique};

	enum Weight {Thin, Light, Normal, Bold};
}


// Temporay shape structure to store data
// All the data listed in shape_input_file_specs.txt
struct Shape
{
	int shapeId;
	string shapeType; // this should be an object type but leave it as string for now
	int shapeDimensions[]; // this should be an object type but leave it as int array for now
	Qt:GlobalColor penColor;
	int penWidth;
	Qt::PenStyle penStyle;	// careful of lower case first letter
	Qt::PenCapStyle penCapStyle;
	Qt::PenJoinStyle penJoinStyle;
	Qt::GlobalColor brushColor;
	Qt::BrushStyle brushStyle;
	string textString;
	Qt::GlobalColor textColor;
	Qt::AlignmentFlag textAlignment;
	int textPointSize;
	string textFontFamily;
	Qt::Style textFontStyle;
	Qt::Weight textFontWeight;
}

void importShape(Shape*, const string &);
int whichData(const string &);
void setData(Shape&, const string &, const int &);

// Testing client here
int main()
{
	cout << "##### PARSING TESTS #####";

	return 0;
}

void importShape(Shape *shape, const string fileName)
{
	int shape_counter = 0;
	bool getting_data = false;
	string str;
	Shape *temp;

	ifstream in(fileName, ios::in)

	if (in.is_open())
	{
		while(getline(cin, str))
		{
			if (getting_data && str == "")
			{
				getting_data = false;
				Shape *newShape = new Shape[shape_counter];
				for (int i = 0; i < shape_counter - 1; ++i)
				{
					newShape[i] = shape[i];
				}
				newShape[shape_counter - 1] = temp;
			}

			else if (str != "" && !getting_data)
			{
				++shape_counter;
				temp = new Shape;
				getting_data = true;
				if (whichData(str.substr(0, str.find(": "))) != -1)
				{
					setData(*temp, str.substr(str.find(": ") + 2, str.length()), whichData(str.substr(0, str.find(": "))));
				}
			}


		}
	}
}


int whichData(const string &str)
{
	int data_num = -1;

	if (str == "ShapeID")
		data_num = 1;
	else if (str == "ShapeType")
		data_num = 2;
	else if (str == "shapeDimensions")
		data_num = 3;
	else if (str == "PenColor")
		data_num = 4;
	else if (str == "PenWidth")
		data_num = 5;
	else if (str == "PenStyle")
		data_num = 6;
	else if (str == "PenCapStyle")
		data_num = 7;
	else if (str == "PenJoinStyle")
		data_num = 8;
	else if (str == "BrushColor")
		data_num = 9;
	else if (str == "BrushStyle")
		data_num = 10;
	else if (str == "TextString")
		data_num = 11;
	else if (str == "TextColor")
		data_num = 12;
	else if (str == "TextAlignment")
		data_num = 13;
	else if (str == "TextPointSize")
		data_num = 14;
	else if (str == "TextFontFamily")
		data_num = 15;
	else if (str == "TextFontStyle")
		data_num = 16;
	else if (str == "TextFontWeight")
		data_num = 17;

	return data_num;
}



void setData(Shape& shape, const string &data, const int &data_num)
{
	// conversion and store
}