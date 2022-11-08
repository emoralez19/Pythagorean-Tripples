// Elizabeth Moralez
// CS 2313
// Chapter 5 Problem 20
// August 28, 2020

#include <iostream>
using namespace std;

int main()
{
	int side1=1;
	int side2=1;
	int hypotenuse=1;

	cout << "Pythagorean triples" << endl << endl;

	for ( side1=1; side1 < 500; side1++)
	{
		for ( side2=1; side2 < 500; side2++)
		{
			for ( hypotenuse=1; hypotenuse < 500; hypotenuse++)
			{
				if ((side1 * side1) + (side2 * side2) == (hypotenuse * hypotenuse))
				{
					cout << side1 << " | " << side2 << " | " << hypotenuse << "|" << endl;
					cout << "--------------------" << endl;
				}
			}
		}
	}

}