#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num, a, b, x, y;
	cout << "This program averages numbers." << endl << endl;
    cout << "Number: ";
    cin >> num;
    while ( num != 0 )
    {
            x += num;
            cout << "Number: ";
            cin >> num;
            a = x;
            b += 1;
            y = a / b;
    }
    if ( num == 0)
        {
            cout << fixed << setprecision(2);
            cout << "The average is " << y << endl;
        }
}

