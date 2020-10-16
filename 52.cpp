/**
 * SubtractionQuizLoop.py, generates five random
 * subtraction questions. Revise the program to generate ten random addition ques-
 * tions for two integers between 1 and 15. Display the correct count and test time.
 */

#include <iostream>
#include <chrono>
#include <experimental/random>

using namespace std;
using namespace std::chrono;
using namespace std::experimental;

int main()
{
	int number;
	int score = 0;
	duration<double> elapsed_seconds;

	for (int i = 1; i <= 3; i++)
	{
		int randNumber1 = randint(0, 100);
		int randNumber2 = randint(0, 100);

		auto start = steady_clock::now();

		cout << randNumber1 << " + " << randNumber2 << " = ";
		cin >> number;

		auto end = steady_clock::now();

		if (number == (randNumber1+randNumber2)) score++;
		elapsed_seconds += (end-start);
	}


	cout << "Your score is " << score << endl;
	cout << "Time spent " << elapsed_seconds.count() << " seconds" << endl;

	return 0;
}