#include <iostream>
using namespace std;

/*
Arithmetic Operators:

1. ()		Parentheses
2. * / %	Multiply/Divide/Modulus (Remainder)
3. + -		Add / Subtract

Operators with equal precedence are evaluated from left to right

How to evaluate expressions:
1. Integral expressions result in an integer value
2. Floating point expressions result in a floating point value
3. Mixed expressions result in a floating point value

The = operator is called the ASSIGNMENT OPERATOR

Syntax for assignment:
variable = expression;

The value on the right side of the = is stored in (assigned)
to the variable on the left
*/

int main()
{
	int iNum;
	double dNum;
	double dValue;

	//This is an integral expression
	cout << (5 * 3 / 2) << endl;

	//This is a floating point expression
	cout << (5.0 * 3.0 / 2.0) << endl;

	//This is a mixed expression
	cout << (9 / 2 * 3.0) << endl;

	//This is another mixed expression
	cout << (9.0 / 2 * 3.0) << endl;

	//You can store the result f arithmetic expressions
	//into variables 
	iNum = 9.0 / 2 * 3; //this resulsts in data loss (decimal lost)
	cout << "iNum: " << iNum << endl;

	dNum = 9.0 / 2 * 3; //this resulsts in NO data loss
	cout << "dNum: " << dNum << endl;

	return 0;
}