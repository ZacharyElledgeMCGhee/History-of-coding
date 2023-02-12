#include <iostream>
#include <iomanip>

using namespace std;
int main( )
{
	//variables
	int d[ 100 ], num[ 100 ], size = 0, sized = 0, x;
	bool appear = false;

	cout << "Enter integer values into the array, or -1 to stop:" << endl;
	cin >> x;

	//While the input is not -1, the input continues
	while( x != -1 )
	{
		//user imput
		num[ size ] = x;
		size++;
		cin >> x;
	}

	d[ 0 ] = num[ 0 ];
	sized = 1;
	
	//compare inputs to find repititions and distinct values
	for( int i = 0; i < size; i++ )
	{
		for( int j = 0; j < sized; j++ )
		{
			if( num[ i ] == d[ j ] )
			{
				appear = true;
				break;
			}
		}
		if( !appear )
		{
			d[ sized ] = num[ i ];
			sized++;
		}
		appear = false;
	}
	cout << endl << "Distinct values in the array:" << endl;
	cout << "(" << d[ 0 ];
	for( int i = 1; i < sized; i++ )
	{
		cout << "," << d[ i ];
	}
	cout << ")";
}