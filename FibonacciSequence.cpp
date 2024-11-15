#include <iostream>
#include <string>


using namespace std;

//Write a program that calculates and prunsigned long longs the Fibonacci Sequence
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc
// 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, ect...

unsigned long calc(unsigned long, unsigned long, unsigned long&);



void numSpace(unsigned long numbF, unsigned long numbS, unsigned long numbResult);

int main()
{
	unsigned long fiboNum = 1;
	unsigned long storedNum = 0;
	unsigned long finalNum = 0;
	unsigned long fib[100] = {0};

	cout << fiboNum << ",";
	for(unsigned long i = 0; i <=99; i++)
	{
		calc(fiboNum, storedNum, finalNum);
		storedNum = fiboNum;
		fiboNum = finalNum;
		fib[i] = finalNum;
		cout << fib[i] << ",";
	}


	
	//for (unsigned long i = 0; i < 99; i++) {

		//fib[i] = calc(fiboNum, storedNum, finalNum);
		//cout << fib[i] << " ";

	//}
	

	return 0;
}



//This function takes in two numbers, adds them, and returns the result.
unsigned long calc(unsigned long x, unsigned long y, unsigned long& z) {

	z = x + y;
	return z;

}


//Spacing out the numbers
void numSpace(double numbF, double numbS, double numbResult)
{
	numbResult = numbF + numbS;

	cout << numbResult << "  ";

}