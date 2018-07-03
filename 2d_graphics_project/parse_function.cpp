/*********************************************************
* GROUP : DEADPOOL
* 2D Graphics Project
* CLASS :CS1B
* SECTION : MTWTh: 1:00p - 4:35p
* Due Date : TBA
**********************************************************/

#include <fstream>


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

