#include <iostream> 
using namespace std;

// This code takes in a number with a decimal and returns the value after the decimal

int main()
{
	float x, sum;
	cout << "Enter number: ";
	cin >> x;
	int y = (int) x;
	sum = x - y;
	cout << endl;
	cout << "After the decimal: ";
	cout << sum;
}