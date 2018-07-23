/*******************************************************************************
 * AUTHOR         : Samuel Vilchez, John, Eunsoo An
 * STUDENT ID     : 1078959
 * GROUP PROJECT  : 2D Graphics Modeler Inc.
 * CLASS          : CS1C
 * SECTION        : MTWTh 4:30 - 7:25pm
 * DUE DATE       : 7/26/2018
 ******************************************************************************/
#include"MyHeader.h"
/*******************************************************************************
 * FUNCTION PrintHeader
 *------------------------------------------------------------------------------
 * 	 This function receives an assignment name, type
 * 		 and number then returns a string to the called function
 * 	 ==> returns string - This will return a string
 *------------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	   The following need a defined value passed in
 * 	   asName : Assignment Name
 *     asType : Assignment Type
 *     asNum  : Assignment Number
 * POST-CONDITIONS
 * 	 ==> returns string - This will return a string
 ******************************************************************************/
string PrintHeader(string asName, // IN - assignment Name - used for output
				   char   asType, // IN - assignment type
				 	 	 	      //    - (LAB or ASSIGN) - used for output
				   int    asNum)  // IN - assign. Number  - used for output
{
	 ostringstream outStr;  // CALC - stream variable concatenating strings

	 outStr << left;
	 outStr << "**************************************************\n";
	 outStr << "* PROGRAMMED BY : Samuel Vilchez\n";
	 outStr << "* " << setw(14) << "STUDENT ID" << ": 1078959\n";
	 outStr << "* " << setw(14) << "CLASS"      << ": CS1C - MTWTh 4:30 - 7:25pm\n";
	 outStr << "* " ;

	 if (toupper(asType) == 'L')
	 {
		 outStr << "LAB #" << setw(9);
	 }
	 else
	 {
		 outStr << "ASSIGNMENT #" << setw(2);
	 }

	 outStr << asNum << ": " << asName << endl;
	 outStr << "**************************************************\n\n";
	 outStr << right;

	 return outStr.str();
}

/*******************************************************************************
 * FUNCTION GetAndCheckUserInput
 * -----------------------------------------------------------------------------
 * This function displays a prompt to the user. It receives input from the user
 * and validates the user input.
 * ==> Returns userInput
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * The following need a defined variable passed in.
 * 		PROMPT      : prompt for the user
 * 		UPPER_BOUND : highest possible value entered
 * 		LOWER_BOUND : lowest possible value entered
 * 		STR_WIDTH   : error length of string
 * POST-CONDITIONS
 * ==> Returns userInput
 ******************************************************************************/
int GetAndCheckUserInput(const string PROMPT,      // IN - prompt for the user
						  const int   UPPER_BOUND, // IN - highest value input
						  const int   LOWER_BOUND) // IN - lowest value input
{
	int    userInput;  // IN & CALC  - contains user input
	bool   invalid;    // CALC       - lcv used for error checking

	do
	{
		cout << PROMPT;
		if(!(cin >> userInput))
		{
			cout << "\n";
			cout << "Please input a NUMBER between "  << LOWER_BOUND;
			cout << " and " << UPPER_BOUND << "!\n\n";

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			invalid = true;
		}
		else if(userInput < LOWER_BOUND || userInput > UPPER_BOUND)
		{
			cout << "\n";
			cout << "The number " << userInput << " is an invalid entry!";
			cout << "\n";

			cout << "Please input a number between " << LOWER_BOUND
			     << " and " << UPPER_BOUND << "!\n\n";
			cout << right;

			invalid = true;
		}
		else
		{
			invalid = false;
		}

	}while(invalid);

	cin.ignore(10000, '\n');

	return userInput;
}
