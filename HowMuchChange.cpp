#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int q, d, n, p;
	float sum;
	cout << "Quarters: ";
	cin >> q;
	cout << "Dimes: ";
	cin >> d;
	cout << "Nickels: ";
	cin >> n;
	cout << "Pennies: ";
	cin >> p;
	cout << endl;
	sum = (q * 0.25) + (d * 0.10) + (n * 0.05) + (p * 0.01);
	cout << fixed << setprecision(2);
	cout << "The total is $" << sum;
}