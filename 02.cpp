/**
 * Write a program that reads in the radius and
 * length of a cylinder and computes the area and volume.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float radius, length;

	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> length;

	float area = radius * radius * M_PI;
	float volume = area * length;

	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;

	return 0;
}