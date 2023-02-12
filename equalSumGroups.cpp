#include <iostream>
#include <sstream>
#include <cstddef>

using namespace std;

bool seperate(int A[], int S3, int S5, int x, int s)
{

	if (x == s)
		return S3 == S5;
// divisible by 5
	else if (A[x] % 5 == 0)
		return seperate(A, S3, S5 + A[x], x + 1, s);
// divisible by 3
	else if (A[x] % 3 == 0)
		return seperate(A, S3 + A[x], S5, x + 1, s);
	else
		return seperate(A, S3 + A[x], S5, x + 1, s) || seperate(A, S3, S5 + A[x], x + 1, s);
}

int main() 
{
//initiate variable
	int values;
//gather user input	
	cout << "How many values? ";
	cin >> values;
//create an array for values
	int* ints = new int[values];
	cout << "Enter numbers: ";
//put user input into array
	for (int i = 0; i < values; i++)
	{
		cin >> ints[i];
	}
	cout << endl;
//run through function
	if(seperate(ints,0,0,0,values))
		cout << "Yes, there are two equal subgroups.";
	else
		cout << "No, there are not two equal subgroups.";
//clean up	
	delete[] ints;
}
