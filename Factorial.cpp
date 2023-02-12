#include <iostream>
#include <iomanip>
using namespace std;

//FUNCTION TO FIND THE FACTORIAL OF A GIVEN NUMBER
// 0!=1, 1!=1, 2!=2, 3!=6, 4!=24....
int fact(int n)
{
	int f=n;
	if(n == 0)
		return 1;
	else
		return f = f * fact(n-1);
}
// GATHER USER INPUT AND OUTPUT THE COMPUTED NUMBER
int main()
{
	int n;
	cout << "This program calculates factorials." << endl << "Enter an integer: ";
	cin >> n;
	cout << endl << n << "! = " << fact(n);
}