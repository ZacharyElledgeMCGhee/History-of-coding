#include <iostream>
using namespace std;

int main()	
{
    //DECLARE VARIABLES
	string input;
	string search;
	int total = 0;
	
	//GATHER INPUT
	cout << "This program determines how many times a letter appears in a given string" << endl;
	
	cout << "Enter a string: "; 
	cin >> input;
	//WORD TO BE ANALYZED
	
	cout << "Enter a character: ";
	cin >> search;
	//LETTER TO BE COUNTED
	cout << endl;
	
	//SEARCH FOR THE LETTER IN THE STRING
	if (search[0] >= 97 && search[0] <= 122)
	{
		search[0] -= 32;
	}
	
	//ADD 1 FOR EVERY TIME THE LETTER APPEARS IN TH ESTRING
	for (int i = 0; input[i] != 0; i++)
	{
		if (input[i] == search[0] || input[i] - 32 == search[0])
		{
			total++;
		}
	}
	
	cout << "\"" << search[0] << "\" appears " << total << " time(s)";
}