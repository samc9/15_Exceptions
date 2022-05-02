//Sam Carlson
//CIS1202.501
//2022-05-01
//Templates
#include <iostream>
using namespace std;

char character(char start, int offset);


int main()
{

	try
	{
		cout << character('a', 1);

	}
	catch (string invalidCharacterException)
	{
		cout << invalidCharacterException;
	}
	catch (string invalidRangeException)
	{
		cout << invalidRangeException;
	}
	

}

char character(char start, int offset)
{
	if (start < 'A' || start > 'Z')
	{
		if (start < 'a' || start > 'z')
		{
			string invalidCharacterException = "ERROR: Not a valid character, enter a-z / A-Z!";
			throw invalidCharacterException;
		}
	}
	if (static_cast<char>(start + offset) < 'A' || static_cast<char>(start + offset) > 'Z')
	{
		if (static_cast<char>(start + offset) < 'a' || static_cast<char>(start + offset) > 'z')
		{
			string invalidRangeException = "\nERROR: Target is not a valid character, enter new offset!\n";
			throw invalidRangeException;
		}
	}
	
	return static_cast<char>(start + offset);
}
