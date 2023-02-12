#include <iostream>
using namespace std;

int main()
{
	float l, w, d, r, v, g, sum;
	cout << "Enter pool dimensions" << endl;
	cout << "Length: ";
	cin >> l;
	cout << "Width: ";
	cin >> w;
	cout << "Depth: ";
	cin >> d;
	v = l * w * d;
	g = v * 7.48;
	cout << endl;
	cout << "Water entry rate: ";
	cin >> r;
	cout << endl;
	sum = g / r;
	cout << "The pool will fill completely in ";
	cout << sum;
	cout << " minutes";
}