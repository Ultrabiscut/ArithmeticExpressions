#include <iostream>
using namespace std;

/*
Accumulation: using a varaibale to store the rusult of
			  a reapeated math operation.

Accumulation statements usually take the form of
something similar to:
	acummulator = accumulator + nesValue;

*/

int main()
{
	//use an accumulator to add up the number
	//1 through 100 (use a loop)

	//loop from 1 to 100
	//add the coutner to the accumulator
	int iSum = 0;
	for (int x = 1; x <= 100; x++)
	{
		iSum = iSum + x;
	}
	cout << "The Sum is: " << iSum << endl;

	//multiplay all numbers from 2 to 8
	int iProd = 1;
	for (int a = 2; a <= 8; a++)
	{
		iProd = iProd * a;
	}
	cout << "The Sume is: " << iProd << endl;


	return 0;
}