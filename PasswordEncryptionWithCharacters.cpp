#include <iostream>

using namespace std;

int main()
{
	cout << int('a');
	string passwordinput;
	//get input string from user
	cin >> passwordinput;

	//regular for loop
	for (int i = 0; i < passwordinput.length(); i++)
	{
		char newChar = char(passwordinput.at(i) + 1);
		//if(newChar > )
		passwordinput.at(i) = newChar;
	}

	cout << passwordinput << endl;




	string Password;
	//get input string from user
	cin >> Password;

	//regular for loop
	for (int i = 0; i < Password.length(); i++)
	{
		Password.at(i) = char(Password.at(i) - 1);
	}

	cout << Password << endl;
}
