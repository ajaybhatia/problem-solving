/**
 * Write a program that reads a Celsius degree from
 * the console and converts it to Fahrenheit and displays the result.
 */

#include <iostream>

using namespace std;

int main()
{
	float celcius;
	
	cout << "Enter a degree in Celsius: ";
	cin >> celcius;

	float fahrenheit = (9.0f/5) * celcius + 32;
	cout << celcius << " Celsius is " << fahrenheit << " Fahrenheit" << endl;

	return 0;
}