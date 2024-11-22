#include <iostream>
//#include <string>

using namespace std;

/*************************
* Josh
* Function Name: makeUppercase
* Parameters: string you want to turn uppercase
* Return Value: uppercase string
* Purpose: capitalize each character in a string, leaving non-alphabetic characters alone
*************************/
string makeUppercase(string);

/*************************
* Function Name: makeLowercase
* Parameters: string you want to turn lowercase
* Return Value: lowercase string
* Purpose: uncapitalize each character in a string, leaving non-alphabetic characters alone
*************************/
string makeLowercase(string);

/*************************
* Function Name: reverseString
* Parameters: string you want to reverse
* Return Value: reversed string
* Purpose: reverse a string
*************************/
string reverseString(string);

/*************************
* Function Name: asciiValueTotal
* Parameters: string
* Return Value: the total sum of each character's ASCII values
* Purpose: calculate the sum of all characters in the string
*************************/
string asciiValueTotal(string);

/*************************
* Leo
* Function Name: returnVowels
* Parameters: string you want the vowels from
* Return Value: all vowels in the string
* Purpose: return a shortened string with only vowels
*************************/
string returnVowels(string);

/*************************
* Function Name: returnConsonants
* Parameters: string you want the consonants from
* Return Value: all consonants in the string
* Purpose: return a shortened string with only consonants, no vowels
*************************/
string returnConsonants(string);

int main()
{
	string testStr;
	cin >> testStr;
	cout << makeUppercase(testStr) << endl;
	//cout << makeLowercase(testStr) << endl;
	//cout << reverseString(testStr) << endl;
	//cout << asciiValueTotal(testStr) << endl;
	cout << returnVowels(testStr) << endl;
	//cout << returnConsonants(testStr) << endl;
	return 0;
}

string returnVowels(string words)
{

    string vowels = {'a', 'e', 'i', 'o', 'u'};
    words;
    int wordLength = words.length();
    string vowelsSearch{};
 
    for (int i = 0; i < wordLength; i++)
    {
        //words.find(vowels);
        
        for (int g = 0; g < 5; g++)
        {
            if (words.at(i) == vowels.at(g))
            {
                vowelsSearch += vowels.at(g);

            }

        }
        
    }

	return vowelsSearch;

}



string makeUppercase(string letters)
{
	

	for(int i = 0; i < letters.length(); i++)
	{
		letters.at(i) = toupper(letters.at(i));
	}

	return letters;
}