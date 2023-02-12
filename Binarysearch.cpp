#include <iostream>
#include <iomanip>
using namespace std;

//PRINT FUNCTION, OUTPUTS IF A GIVEN NUMBER APPEARS IN A LIST
void print( int i, int value )
{
	if(i == -1)
		cout << value << " does not appear in the list";
	else
		cout << value << " appears at index " << i;
}
//BINARY SEARCH FUNCTION
int binarySearch(int A[], int size, int value)
{
	int i=size/2, range=size/2, count=0;
	while( true )
	{
		range = range / 2;
		if( range == 0 )
			range = 1;
		if( A[i] > value )
			i -= range;
		else if ( A[i] < value )
			i += range;
		else if ( A[i] == value )
		{
			return i;
		}
		if ( count == size )
		{
			return i = -1;
		}
		count++;
	}
}

int main()
{
	int size, value, A[100], i;
	cout << "How many values? ";
	cin >> size;
	for(int j=0 ; j<size ; j++)
		cin >> A[j];
	cout << "Search for: ";
	cin >> value;
	i = binarySearch(A, size, value);
	print(i, value);
}