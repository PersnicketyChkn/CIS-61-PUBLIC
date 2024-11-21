#include <iostream>
using namespace std;

//declaring functions
int adder(int, int);
int multiplier(int, int, float &result);

int main()
{
	int a = 3, b = 7;
	float result = 0;
	cout << adder(a, b) << endl;
	a = b + multiplier(a, b, result);
	cout << a << endl;
	cout << result << endl;
	return 0;
}

//adds two numbers
int adder(int num1, int num2)
{
	return num1 + num2;
}

//multiplies two numbers
int multiplier(int a, int b, float &randomname)
{
	randomname = a * b;
	return 3;
}
