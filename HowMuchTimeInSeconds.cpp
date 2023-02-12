#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float e, h, m, s, sum1, sum2, sum3, sum4, sum5, sum6;
	cout << "This program converts seconds into hours, minutes and seconds." <<endl;
	cout << "Enter the number of seconds: ";
	cin >> e;
	h = e/3600;
	sum1 = (int) h;
	sum2 = sum1 -h;
	sum3 = (int) sum2;
	m = sum3 - sum2;
	sum4 = m *60;
	sum5 = (int) sum4;
	sum6 = sum4 - sum5;
	s= sum6 * 60;
	cout << fixed << setprecision(0);
	cout << "This corresponds to ";
	cout << sum1;
	cout << " hours, ";
	cout << sum5;
	cout << " minutes, and ";
	cout << s;
	cout << " seconds." << endl;
} 
	