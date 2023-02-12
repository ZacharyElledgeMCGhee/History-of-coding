
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y, z, a, sum;
    cout << "This program lists the Fibonacci sequence." << endl;
    cout << "Highest Fibonacci number to print? ";
    cin >> a;
    x = 0;
    y = 0;
    sum = 0;
    z = 0;
    cout << "F(" << setw (2) << x << ") =" << setw (5) << y << endl;
    x += 1;
    y += 1;
    cout << "F(" << setw (2) << x << ") =" << setw (5) << y << endl;
    x+=1;
    z = y;
  while (y<=a)
  {
    sum = y;
    cout << "F(" << setw (2) << x << ") =" << setw (5) << y << endl;
    if (y > a)
        break;
    x += 1;
    y = sum + z;
    if ( y > a )
        break;
    cout << "F(" << setw (2) << x << ") =" << setw (5) << y << endl;
    x +=1;
    z = y;
    y = sum + z;
    if (y > a )
        break;
  }
}