#include <iostream>
using namespace std;

int main( )
{
    cout << "This program sums the digits of an integer." << endl << endl;
   int number, x, y, z, n;
   cout << "Enter an integer: ";
   cin >> number;
   n = number;
   float sum;
   if ( n == 0)
   {
	    cout << "The sum of the digits in " << number << " is 0." << endl;
   }
   while( true )
   {
        x = n % 10;
        n = n / 10;
        sum += x;
        if ( n < 10 )
        {
            sum += n;
            break;
        }
   }

   cout << "The sum of the digits in " << number << " is " << sum
        << "." << endl;
}
