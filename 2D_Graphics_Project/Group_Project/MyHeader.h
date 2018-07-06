/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<QPainter>

using namespace std;

#include"Shape.h"
#include"Line.h"
#include"Polyline.h"
#include"Polygon.h"
#include"Rectangle.h"
#include"Ellipse.h"
#include"Text.h"

/*******************************************************************************
 * PrintHeader
 *------------------------------------------------------------------------------
 * 	 This function receives an assignment name, type
 * 		 and number then returns a string to the called function
 * 	 ==> returns string - This will return a string
 ******************************************************************************/
string PrintHeader(string asName, // IN - assignment Name - used for output
				   char   asType, // IN - assignment type
				 	 	 	      //    - (LAB or ASSIGN) - used for output
				   int    asNum); // IN - assign. Number  - used for output

/*******************************************************************************
 * GetAndCheckUserInput
 * -----------------------------------------------------------------------------
 * This function displays a prompt to the user. It receives input from the user
 * and validates the user input.
 * ==> Returns userInput
 ******************************************************************************/
int GetAndCheckUserInput(const string PROMPT,       // IN - prompt for the user
						  const int   UPPER_BOUND,  // IN - highest value input
						  const int   LOWER_BOUND); // IN - lowest value input
				   
#endif /* MYHEADER_H_ */
