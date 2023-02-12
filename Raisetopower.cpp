#include <iostream>
#include <iomanip>
using namespace std;

//FUNCTION THAT ACCEPRS TWO INTEGERS AND RETURNA A SINGLE RESULT
//RAISES ONE INTEGER TO ANOTHER POWER
int powe(int num,int p)
{
	int out = num;
	if(p == 0)
		return 1;
	else if(p == 1)
		return out * 1;
	else
		return out = out * powe(num, p-1);
}
//TAKE IN USER INPUT AND OUTPUT THE PRODUCT
int main()
{
	int p, num;
	cout << "This program calculates exponential values." ;
	cout << endl << "Enter the base:  ";
	cin >> num;
	cout << "Enter the power: ";
	cin >> p;
	cout << endl << num << "^" << p << " = " << powe(num, p);
}