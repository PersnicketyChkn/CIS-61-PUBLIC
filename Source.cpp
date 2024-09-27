//adds together the first 100 integers from 1-100 and print the result to the console

#include <iostream>
using namespace std;

int main()
{
	//setup - define variables
	int sum = 0;
	
	//loop - add the first 100 integers
	//while, for, do-while
	int i = 1;

	while (i <= 100)
	{
		sum += i;
		//print out the current number and the current sum
		cout << i << ": " << sum << endl;
		i++;
	}

	//print sum to console
	cout << sum;
}