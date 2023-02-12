#include <iostream>
#include <iomanip>
using namespace std;

//GIVEN VOID TO USE IN SELECTION SORT
void PrintArray(int a[], int size)
{
	cout << endl;
	for( int i = 0; i < size - 1; i++ )
		cout << setw(2) << a [i] << ",";
	cout << setw (2) << a [size - 1];
}

void selectionSort(int A[], int size)
{
	int min, sub;
	for(int i = 0 ; i < size - 1 ; i++)
	{
		min = i;
		for ( int j = i + 1 ; j < size ; j++)
		{
			if ( A [j] < A [min] )
			{
				min = j;
			}
		}
		sub = A[min];
			A[min] = A[i];
			A[i] = sub;
		PrintArray( A, size );
	}
}

//MAIN FUNCTION TO GATHER USER INPUT AND RUN THE FUNCTIONS
int main()
{
	int values[100], size;
	cout << "This program sorts a set of numbers." << endl << endl << "How many values? ";
	cin >> size;
	for(int i=0 ; i<size ; i++)
		cin >> values[i];
	selectionSort(values, size);
}