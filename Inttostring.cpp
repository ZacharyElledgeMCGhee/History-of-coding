#include <iostream>
#include <iomanip>
using namespace std;

//A FUNCTION TO CHANGE AN INTEGER VALUE INTO A STRING VALUE
string intToString(int n)
{
	int count = 0, temp = n, x, store[100];
	string output;
	if(n == 0)
		return output = "0";
	if(n < 0)
	{
		output += '-';
		temp = n*(-1);
		n = n*(-1);
	}
	
	while(temp >= 1) 
		//FIND THE NUMBER OF DIGITS THAT WERE ENTERED
	{
		temp = temp/10;
		count++;
	}
	
	for(int i=count-1; i>=0 ; i--)
	{
		x = ((n % 10)+48);
		store[i] = x;
		n = n / 10;
	}

	//PRINT THE DIGITS OUT
	for(int j=0 ; j<count ; j++)
	{
		output += store[j];
	}
	
	return output;
}
//GATHER USER INPUT AND THEN DISPLAY THE OUTPUT AFTER THE FUNCTION
int main()
{
	int input;
	cout << "Enter number: ";
	cin >> input;
	cout << "The integer value " << input << " becomes the string value \"" << intToString(input) << "\"";
}