#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "This program calculates mileage." << endl;
    float o, g, sum, sum2, tm, co, gg, at, x; 
    int n, d;
    cout << "Type in -1 for the odometer reading to signify the end of the program." << endl;
    cout << "Enter gallons at least once."<< endl;
    
    cout << "Initial odometer reading: "; // = 0
    cin >> o;
    cout << endl;
    
    cout << "Current odometer reading: "; // = new
    cin >> n;
    
    cout << "Gallons of gas purchased: "; // = g
    cin >> g;
    
    // current - Initial
    tm = n - o;
    
    // miles driven = tm
    sum = tm / g;
    
    cout << "You drove " << tm << " miles averaging ";
    cout << fixed << setprecision(2) << sum << " mpg." << endl << endl;
    cout << setprecision(0);
    d = n;
    x = 1; // counts times the car fills up on gas
    while ( true )
    {
        x += 1;
        if ( n == -1 )
        {
            cout << "All together, you drove " << at << " miles on ";
            cout << fixed << setprecision(2) << g << " gallons of gas, averaging ";
            cout << fixed << setprecision(2) << sum2 << " mpg." << endl;
            break;
        }
        
        cout << fixed << setprecision(0);
        cout << "Current odometer reading: "; // = new (in the loop)
        cin >> n;
        if ( n == -1 && x <= 2 )
        {
            cout << "All together, you drove " << tm << " miles on ";
            cout << fixed << setprecision(2) << g << " gallons of gas, averaging ";
            cout << fixed << setprecision(2) << sum << " mpg." << endl;
            break;
        }
        
        if ( n == -1 )
        {
            cout << "All together, you drove " << at << " miles on ";
            cout << fixed << setprecision(2) << g << " gallons of gas, averaging ";
            cout << fixed << setprecision(2) << sum2 << " mpg." << endl;
            break;
        }
        
        cout << fixed << setprecision(0);
        cout << "Gallons of gas purchased: "; // = gg (in the loop)
        cin >> gg;
        g = g + gg;
        
         // current - previous odometer reading
        tm = n - d;
        
        d = n;
    
        // miles driven = tm
        sum = tm / gg;
        
        at = n - o;
        
        sum2 = at / g;
    
        cout << "You drove " << tm << " miles averaging ";
        cout << fixed << setprecision(2) << sum << " mpg." << endl << endl;
    }
}
