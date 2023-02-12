
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // The program prints a table of exponential powers.
    // Enter the number of rows to print: 
    // Enter the number of powers to print: 
    int row, power, last;
    cout << "The program prints a table of exponential powers." << endl;
    cout << "Enter the number of rows to print: ";
    cin >> row;
    cout << "Enter the number of powers to print: ";
    cin >> power;
	cout << endl;
    for (int p = 1; p <= row; p ++)
    {
        for (int r = 1; r <= power; r ++)
        {
            if ( r == 1 )
            {
                last = p;
                cout << setw(2);
                cout << p * r;
            }
            else 
            {
                cout << setw(8) << last * p ;
                last = last * p;
                
            }
        }
        cout << endl;
    }
}