#include "parser2.cpp"


void importFile(Qt::QPaintDevice *device, vector<Shape> &shapeVec, const string &fileName)
{
	int shape_counter = 0;	// necessary?
	bool getting_data = false;
	string str;

	ifstream in(fileName, ios::in);

	if (in.is_open())
	{
		int shapeID = -999;
		string shapeType = "";
		vector<int> *shapeDimensions;
		string penColor = "";
		int penWidth = -999;
		string penStyle = "";
		string penCapStyle = "";
		string penJoinStyle = "";
		string brushColor = "";
		string brushStyle = "";
		string textString = "";
		string textColor = "";
		string textAlignment = "";
		int textPointSize = -999;
		string textFontFamily = "";
		string textFontStyle = "";
		string textFontWeight = "";
		Shape *shape;

		while (getline(cin, str))
		{
			if (!getting_data && str != "")
			{
				++shape_counter;
				getting_data = true;
				if (str.substr(0, str.find(":")) == "ShapeId")
					shapeID = stoi(str.substr(str.find(":") + 2, str.size() - str.find(":") - 1));
			}

			else if (getting_data && str != "")
			{
				int dataType = whichData(str.substr(0, str.find(":")));
				if (dataType = 1)
					shapeID = stoi(str.substr(str.find(":") + 2, str.size() - str.find(":") - 1));
				else if (dataType = 2)
					shapeType = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 3)
					shapeDimensions = getDimensions(str.substr(str.find(":") + 2, str.size() - str.find(":") - 1));
				else if (dataType = 4)
					penColor = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 5)
					penWidth = stoi(str.substr(str.find(":") + 2, str.size() - str.find(":") - 1));
				else if (dataType = 6)
					penStyle = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 7)
					penCapStyle = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 8)
					penJoinStyle = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 9)
					brushColor = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 10)
					brushStyle = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 11)
					textString = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 12)
					textColor = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 13)
					textAlignment = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 14)
					textPointSize = stoi(str.substr(str.find(":") + 2, str.size() - str.find(":") - 1));
				else if (dataType = 15)
					textFontFamily = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 16)
					textFontStyle = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
				else if (dataType = 17)
					textFontWeight = str.substr(str.find(":") + 2, str.size() - str.find(":") - 1);
			}
Line::Line(int shapeId, string shapeType, vector<int> shapeDimensions, Qt::GlobalColor penColor, 
           int penWidth, Qt::PenStyle, penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle)
			else if (getting_data && str == "")
			{
				if (shapeType == "Line")
				{
					Qt::GlobalColor color = whichColor(penColor);
					Qt::PenStyle style = whichPenStyle(penStyle);
					Qt::PenCapStyle cap = whichPenCapStyle(penCapStyle);
					Qt::PenJoinStyle joinstyle = whichPenJoinStyle(penJoinStyle);
					Qt::QBrush qBrush(color);
					Qt::QPen qPen(qBrush, penWidth, style, cap, joinstyle);
					Qt::Line line()
					Qt::Line line(shapeID, *shapeDimensions, PenColor, penWidth, PenStyle, PenCapStyle, PenJoinStyle);
					shapeVec.push_back(line);
				}
				Line(QPaintDevice *device, int shapeId, QPen pen, QBrush brush, vector<int> shapeDimensions);
				QPen(const QBrush &brush, qreal width, Qt::PenStyle style = Qt::SolidLine, Qt::PenCapStyle cap = Qt::SquareCap, Qt::PenJoinStyle join = Qt::BevelJoin)
				else if (shapeType == "Something")
				{

				}

				shapeID = -999;
				shapeType = "";
				delete shapeDimensions;
				penColor = "";
				penWidth = -999;
				penStyle = "";
				penCapStyle = "";
				penJoinStyle = "";
				brushColor = "";
				brushStyle = "";
				textString = "";
				textColor = "";
				textAlignment = "";
				textPointSize = -999;
				textFontFamily = "";
				textFontStyle = "";
				textFontWeight = "";
			}
		}
////
		while(getline(cin, str))
		{
			if (!getting_data && str != "")
			{
				++shape_counter;
				Shape newShape = new Shape;
			}
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


Shape* whichShape(const string &shape)
{
	Shape *temp;
	if (shape == "Line")
		temp = new Line;
	else if (shape == "Polyline")
		temp = new Poloygon;
	else if (shape == "Rectangle")
		temp = new Rectangle;
	else if (shape == "Square")
		temp = new Square;
	else if (shape == "Ellipse")
		temp = new Ellipse;
	else if (shape == "Circle")
		temp = new Circle;
	else if (shape == "Text")
		temp = new Text;


	return temp;
}


vector<int>* getDimensions(const string &str)
{
	string temp = str;
	vector<int> *vec = new vector<int>;
	while (temp.find(",") != string::npos)
	{
		vec->push_back(stoi(temp.substr(0, temp.find(","))));
		temp = temp.substr(temp.find(",") + 2, temp.size() - temp.find(",") - 1);
	}
	vec->push_back(stoi(temp));

	return vec;
}


Qt::GlobalColor whichColor(const string &str)
{
	if (str == "white")
		return Qt::white;
	else if (str == "black")
		return Qt::black;
	else if (str == "red")
		return Qt::red;
	else if (str == "green")
		return Qt::green;
	else if (str == "blue")
		return Qt::blue;
	else if (str == "cyan")
		return Qt::cyan;
	else if (str == "magenta")
		return Qt::magenta;
	else if (str == "yellow")
		return Qt::yellow;
	else if (str == "gray")
		return Qt::gray;
	else
		return Qt::black;
}


Qt::PenStyle whichPenStyle(const string &str)
{
	if (str == "NoPen")
		return Qt::NoPen;
	else if (str == "SolidLine")
		return Qt::SolidLine;
	else if (str == "DashLine")
		return Qt::DashLine;
	else if (str == "DotLine")
		return Qt::DotLine;
	else if (str == "DashDotLine")
		return Qt::DashDotLine;
	else if (str == "DashDotDotLine")
		return Qt::DashDotDotLine;
	else
		return Qt::NoPen;
}


Qt::PenCapStyle whichPenCapStyle(const string &str)
{
	if (str == "FlatCap")
		return Qt::FlatCap;
	else if (str == "SquareCap")
		return Qt::SquareCap;
	else if (str == RoundCap)
		return Qt::RoundCap;
	else
		return Qt::FlatCap;
}


Qt::PenJoinStyle whichPenJoinStyle(const string &str)
{
	if (str == "MiterJoin")
		return Qt::MiterJoin;
	else if (str == "BevelJoin")
		return Qt::BevelJoin;
	else if (str == "RoundJoin")
		return Qt::RoundJoin;
	else
		return Qt::MiterJoin;
}









