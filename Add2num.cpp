#include <iostream>
using namespace std;

//this program adds 2 numbers

int main()
{
	int x, y, sum;
	cout << "This program adds two numbers." << endl;
	cout << "1st number? ";
	cin >> x;
	cout << "2nd number? "; 
	cin >> y;
	cout << "The total is ";
	sum = x + y;
	cout << sum;
	cout << ". " << endl;
}