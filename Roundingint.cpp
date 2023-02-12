#include <iostream>
#include <iomanip>
using namespace std;
//CREATE A FUNCTION FOR ROUNDING NUMBERS
int round(int number, int unit)
{
	return (number/unit)*unit;
}

int main()
{
	//GATHER INPUT AND DECLARE VARIABLES
	int input;
	cout << "Enter an integer: ";
	cin >> input;
	//OUTPUT THE ROUNDED NUMBER
	cout << endl << "Round to ten: " << round(input,10) << endl;
	cout << "Round to hundred: " << round(input,100) << endl;
	cout << "Round to thousand: " << round(input,1000);
}