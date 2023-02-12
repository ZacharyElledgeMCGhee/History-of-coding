#include <iostream>

using namespace std;

// this code calculates a possible parking fee at an airport

int main()
{
    int t, x, sum1;
    x = 0;
    cout << "Enter parking duration (in minutes): ";
    cin >> t;
    cout << endl;
    
    if ( t <= 30 )
    {
        cout << "Parking cost = $" << x;
    }
    if ( t > 30 )
    {
        if ( t <= 60 ) 
        {
            x = 2;
            cout << "Parking cost = $" << x;
        }
        if ( t > 61 && t <= 420 )
        {
            x = 3;
            sum1 = ((t-61)/30);
            x = x + (int)sum1;
            cout << "Parking cost = $" << x;
        }
        if ( t > 421 && t < 1440)
        {
            x = 15;
            sum1 = (t-421)/60;
            x = sum1 +x;
            if ( x > 21 )
            {
                x = 21;
                cout << "Parking cost = $" << x;
            }
			cout << "Parking cost = $" << x;
        }
        if ( t >= 1440 )
        {
            cout << "Parking cost = $21";
        }
    }
    
//*Time	                        Cost
//First 30 minutes          	FREE
//31 to 60 minutes	            $2.00
//Each additional 30 minutes	$1.00
//Up to seven hours	            $14.00
//Thereafter, each hour	        $1.00
//24-hour maximum           	$21.00

}
