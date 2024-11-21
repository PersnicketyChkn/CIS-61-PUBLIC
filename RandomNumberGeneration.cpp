#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//prints out random numbers from 0-RAND_MAX forever
	/*time_t currentTime = time(NULL);
	srand(currentTime);
	while (true)
	{
		cout << rand() << endl;
	}*/

	//prints out a random number and then the 0-99 remainder of that number divided by 100
	//srand(time(NULL));
	//int randomNumber = rand();
	//cout << randomNumber << endl;
	//cout << randomNumber % 100;

	srand(time(NULL));
	int number;
	cin >> number;
	//print out the user entered number + 0-9 randomly
	cout << number + (rand() % 10) << endl;
}
