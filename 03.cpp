/**
 * Write a program that reads a number in feet, converts it
 * to meters, and displays the result.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float feet;

	cout << "Enter a value for feet: ";
	cin >> feet;

	float meters = 0.305*feet;

	cout << feet << " feet is " << meters << " meters" << endl;

	return 0;
}