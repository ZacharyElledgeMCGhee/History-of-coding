#include <iostream>
#include <iomanip>
using namespace std;
// CREATE A FUNCTION VOID THAT ACCEPTS AN 
//INTEGER ARRAY WITH SIZE VALUES IN IT AND REMOVES THE ODD VALUES
void removeOdds(int A[ ], int& size) 
{
	int newSize=0;
	for(int i=0 ; i<size ; i++)
	{
		if(A[i] % 2 == 0)
		{
			A[newSize] = A[i];
			newSize++;
		}
	}
	size=newSize;
}
// VOID GIVEN TO USE
// PRINTS A COMMA SEPERATED LIST
void printArray(int X[], int n) 
{
    cout << "[ " << X[0];
    for( int i = 1; i < n; i++ )
        cout << ", " << X[i];
    cout << " ]";
}
// TAKES THE ARRAY SIZE AND VALUES AND CALLS BOTH FUNCTIONS
int main() 
{
	//GATHER USER INPUT
	int values[100], size;
	cout << "Size? ";
	cin >> size;
	cout << "Values? ";
	for(int i=0 ; i<size ; i++)
	{
		cin >> values[i];
	}
	removeOdds(values,size);
	printArray(values,size);
}

