#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double avg, num[7], high, low;
    int i=0;
    avg=0;
    // takes in all numbers
    for (int x = 0; x < 7; x ++)
    {
        cin >> num[i];
        i++;
    }
    i = 0;
    high = num[1];
    low = num[1];
    //find the outliers ( high and low )
    for (int x = 0; x < 7; x++ )
    {
        if ( num[i] > high)
        {
            high = num[i];
        }
        if ( num[i] < low)
        {
            low = num[i];
        }
        avg += num[i];
        i++;
    }
    //take away the high and low from the average 
    avg -= high;
    avg -= low;
    //find average
    avg /= 5;
    cout << fixed << setprecision(2);
    cout << "Average score: " << avg << endl;
}