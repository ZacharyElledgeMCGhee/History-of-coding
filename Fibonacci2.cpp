
#include <iostream>

using namespace std;

int main()
{
    int x, y, z, a, sum, b;
    cout << "This program lists the Fibonacci sequence." << endl;
    cout << "How many terms? ";
    cin >> a;
    x = 0;
    y = 0;
    sum = 0;
    z = 0;
    b = 1;
    if ( a >= 1 )
        cout << "F(" << x << ") = " << y << endl;
    x += 1;
    y += 1;
    b += 1;
    if ( a >= 2 )
        cout << "F(" << x << ") = " << y << endl;
    x += 1;
    z = y;
    b += 1;
    for( int  i = 2 ; i <= a; i++ )
        {
            if ( a == i )
                break;
            sum = y;
            cout << "F(" << x << ") = " << y << endl;
            i += 1;
            if ( a == i )
                break;
            x += 1;
            y = sum + z;
            cout << "F(" << x << ") = " << y << endl;
            if ( a == i)
                break;
            x += 1;
            z = y;
            y = sum + z;
        }
}
