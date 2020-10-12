/**
 * Write a program that reads the subtotal and
 * the gratuity rate and computes the gratuity and total. For example, if the user
 * enters 10 for the subtotal and 15% for the gratuity rate, the program displays 1.5
 * as the gratuity and 11.5 as the total.
 */

#include <iostream>

using namespace std;

int main()
{
	float subtotal, gratuity_rate;

	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuity_rate;

	float gratuity = subtotal * (gratuity_rate / 100.0f);	
	float total = subtotal + gratuity;

	cout << "The gratuity is " << gratuity << " and the total is " << total << endl;

	return 0;
}