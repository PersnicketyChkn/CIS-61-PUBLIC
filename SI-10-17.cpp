#include <iostream>

using namespace std;

//pass by value function
//copy and pasting a value
void someFunction(int x)
{
	x++;
	//cout << &x << ": " << x << " value of x" << endl;
	cout << x << endl;
}

//pass by reference function
//giving the function your "home address"
void someOtherFunction(int &x)
{
	x++;
	//cout << &x << ": " << x << " value of x" << endl;
	cout << x << endl;
}

int main()
{
	int a = 22;
	someFunction(a); //by value
	someOtherFunction(a); //by reference
	//cout << &a << ": " << a << " value of a" << endl;
	cout << a;

	//Theories: 23, 24, 24
	//			23, 23, 24
	//			23, 24, 25
	//Results:  23, 23, 23

	return 0;
}