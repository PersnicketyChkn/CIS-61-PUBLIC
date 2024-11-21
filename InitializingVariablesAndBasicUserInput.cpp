#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//initializing all variables
	int a, b, d, e, f, g, h;

	float c; //this number can be a decimal

	//Ctrl + K, then Ctrl + C to comment out multiple lines
	//cin >> a;
	//cin >> b;
	//cin >> c;

	//inputing all variables
	cin >> a >> b >> c >> d >> e >> f >> g >> h;

	//calculating the meaning of life
	cout << c * (a+b) / d * e + (f*g*h);

	//returning some value at the end of every program
	//0 = no errors, nonzero = error
	return 0;
}
