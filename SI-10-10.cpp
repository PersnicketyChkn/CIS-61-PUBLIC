#include <iostream>
#include <Windows.h>
using namespace std;

float returnGreater(float &num1, float &num2);

int main()
{
	srand(time(NULL));
	////user enters two numbers
	//float a, b, c;
	//cin >> a >> b >> c;

	//function that returns the greater of one hundered numbers
	/*int numbers[100];
	for (int i = 0; i < 100; i++)
	{
		numbers[i] = 1 + rand() % 100;
	}

	int theGreatestNumberThatEverLived = 0;
	for (int i = 0; i < 100; i++)
	{
		theGreatestNumberThatEverLived = returnGreater(numbers[i], theGreatestNumberThatEverLived);
		cout << theGreatestNumberThatEverLived << endl;
	}

	return 0;*/

	float test1 = 5;
	float test2 = 2;
	returnGreater(test1, test2);
	cout << test1 << endl;
	cout << test2;
}

float returnGreater(float &num1, float &num2)
{
	//num1 += 3;
	if (num1 > num2)
	{
		return num1;
	}
	return num2;
}