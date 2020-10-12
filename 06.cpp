/**
  * Write a program that reads an integer and adds all the 
  * digits in the integer. For example, if an integer is 932, 
  * the sum of all its digits is 14.
  */

#include <iostream>

using namespace std;

int main()
{
	int number, sum = 0;

	cout << "Enter a number: ";
	cin >> number;

	while (number > 0) {
		int digit = number % 10;
		sum += digit;
		number /= 10;
	}

	cout << "The sum of the digits is " << sum << endl;

	return 0;
}
