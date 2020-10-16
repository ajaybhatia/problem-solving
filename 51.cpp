/**
 * Write a program that reads an unspecified number of integers, determines
 * how many positive and negative values have been read, and computes the total
 * and average of the input values (not counting zeros). Your program ends with the
 * input 0 . Display the average as a floating-point number.
 */

#include <iostream>

using namespace std;

int main() 
{
	int number, countPositive = 0, countNegative = 0;
	int total = 0, sum = 0;
	float average;

	while(1) 
	{
		cout << "Enter an integer, the input ends if it is 0: ";
		cin >> number;

		if (number == 0) 
		{
			break;
		} 
		else 
		{
			if (number < 0)
				countNegative++;
			else  		
				countPositive++;

			total++;
			sum += number;
			average = (float)sum / total;	
		}
	}

	if (total == 0) {
		cout << "You didn't enter any number" << endl;
	} else {
		cout << "The number of positives is " << countPositive << endl;
		cout << "The number of negatives is " << countNegative << endl;
		cout << "The total is " << total << endl;
		cout << "The average is " << average << endl;
	}

	return 0;
}