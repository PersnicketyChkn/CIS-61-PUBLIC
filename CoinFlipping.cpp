#include <iostream>

using namespace std;

class Coin
{
private:
	bool isHeads;
	string Head = " _____\n|     |\n|  H  |\n|_____|\n";
	string Tail = " _____\n|     |\n|  T  |\n|_____|\n";
public:
	void flip();
	void printCoin();
};

void Coin::flip()
{
	int random = rand() % 2;
	if (random == 0)
	{
		isHeads = true;
	}
	else
	{
		isHeads = false;
	}
}

void Coin::printCoin()
{
	if (isHeads == true)
	{
		cout << Head << endl;
	}
	else
	{
		cout << Tail << endl;
	}

}

int main()
{
	srand(time(NULL));

	Coin coins[5];
	for (int i = 0; i < 5; i++)
	{
		coins[i].flip();
		coins[i].printCoin();
	}
	return 0;
}