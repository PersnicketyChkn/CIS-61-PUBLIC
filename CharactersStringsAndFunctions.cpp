#include <iostream>

using namespace std;

int highestScoreCalculator();
string stringAssembler();

int main()
{
	//cout << highestScoreCalculator();
	stringAssembler();
}

string stringAssembler()
{
	//create a really big array of chars
	char letters[500] = {};

	//infinitely cin characters from console, until we enter "$"
	
	int arrayCurrentPlaceInArrayDotJPG = 0;
	char user;
	cout << "Enter a letter: ";
	cin >> user;
	while (user != '$')
	{
		//store user input in the next slot of the array letters[]
		letters[arrayCurrentPlaceInArrayDotJPG] = user;

		cout << "Enter a letter: ";
		cin >> user;
		arrayCurrentPlaceInArrayDotJPG++;
	}


	//turn the array of characters into a string
	cout << letters;

	return letters;
}

int highestScoreCalculator()
{
	//create an array of 10 scores
	int highscores[10] = {};

	//cin each of the scores
	for (int count = 0; count <= 9; count++)
	{
		cout << "enter a score: ";
		cin >> highscores[count];
		cout << endl;
	}

	//return the highest score
	int highestScoreValue = 0;
	for (int score : highscores)
	{
		if (highestScoreValue < score)
		{
			highestScoreValue = score;
		}
	}
	return highestScoreValue;
}
