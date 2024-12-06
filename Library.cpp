#include <iostream>

using namespace std;

class Book
{
public:
	string name = "";
	string author = "";
	int ISBN = 1;
	bool checkedOut = false;
	Book() {}
	Book(string bookName, string bookAuthor, int isbn)
	{
		name = bookName;
		author = bookAuthor;
		ISBN = isbn;
	}
};

class Library
{
private:
	Book books[1000];
	string address = "";
	int buildingNumber = 0;
public:
	Library()
	{
	}
	Book findBookByName(string bookName)
	{
		for (Book b : books)
		{
			if (b.name == bookName)
			{
				return b;
			}
			return;
		}
	}
	bool isLibraryClosed()
	{

	}
};

int main()
{
	Library SCLibrary;
	Book result;
	result = SCLibrary.findBookByName("The Great Gatsby");
	cout << result.name << " " << result.author;
	return 0;
}

