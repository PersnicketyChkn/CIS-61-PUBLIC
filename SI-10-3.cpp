#include <iostream>
#include <Windows.h> //sleep function

using namespace std;

/*******************************************************************************
* Function Name: main()
* Parameters: None
* Return Value: int
* Purpose: A text-based video game! (practicing if/switch statements)
*******************************************************************************/
int main()
{
	//ask user if they want to win the game
	cout << "Do you want to win? (Y/N)\n";
	//get user input
	string winAsk;
	cin >> winAsk;
	//check the input
	//output a result based on their input
	int num = 0;

	int frustrationLevel = 0;

	bool gameActive = true;
	while (gameActive)
	{
		if (winAsk == "Y" || winAsk == "y")
		{
			cout << "Too bad, you lose!";
			gameActive = false;
		}
		else if (winAsk == "N" || winAsk == "n")
		{
			cout << "You lose!";
			gameActive = false;
		}
		else if (winAsk == "Maybe" || num == 1)
		{
			cout << "You lose anyways!\n";
			gameActive = false;
		}
		else
		{
			//tell the user if they entered a wrong input
			cout << "you entered a wrong input, please enter Y or N\n";
			cin >> winAsk;
			frustrationLevel++;
			
			switch (frustrationLevel)
			{
			case 5:
				cout << "You better stop that! Or else...\n";
				break;
			case 6:
				cout << "This is maddening!\n";
				break;
			case 7:
				cout << "You really want to do this, huh?\n";
				break;
			case 8:
				cout << "Can you even read?\n";
				break;
			case 9:
				cout << "Is your cat walking across the keyboard?\n";
				break;
			case 10:
				cout << "You are really getting on my nerves, please STOP. I AM WARNING YOU.\n";
				break;
			case 11:
				system("cls");
				cout << "Alright, you've done it. It's time.\n";
				//console commands, you can use any one that you know, just put it in quotes
				//system("pause");

				//pause the program for a number of milliseconds
				Sleep(10000);

				while (true)
				{
					cout << "DIE!";
				}
				break;
			}

		}

	}
	//run the code again.
	return 0;
}