#include <iostream>
using namespace std;

//This code takes the hexadecimal value of a character 
//and adds them to produce an integer value

int main()
{
	char input1; 
	char input2; 
	int answer = 0;
	
	cout << "Add two hexadecimal digits and then" << endl;
	cout << "show the result as a decimal value." << endl;
	cout << endl;
	// GATHER USER INPUT FOR CHARACTERS OR VALUES
	cout << "Hexadecimal: "; cin >> input1;
	cout << "Hexadecimal: "; cin >> input2;
	cout << endl;
	
	//tAKES THE INPUT AND GIVES IT THE RIGHT CORRESPONDING VALUE
	if (input1 < 58)	{
		answer += (input1 - 48);
	}	else	{
		answer += (input1 - 87);
	}
	if (input2 < 58)	{
		answer += (input2 - 48);
	}	else	{
		answer += (input2 - 87);
	}
	
	cout << input1 << " + " << input2 << " = " << answer;
}