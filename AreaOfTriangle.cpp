#include <iostream>
using namespace std;

// calculate the area of a triangle

int main()
{
	float x, y ,sum;
	cout << "This program computes the area of a triangle." << endl;
	cout << endl;
	cout << "Enter the base of the triangle: ";
	cin >> x;
	cout << "Enter the height of the triangle: ";
	cin >> y;
	cout << endl;
	sum = 0.5 * x * y;
	cout << "The area is ";
	cout << sum;
}
	
