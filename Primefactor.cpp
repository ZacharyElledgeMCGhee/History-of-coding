#include <iostream>

using namespace std;
int main()
{
    int n, x, count, num;
    n = 2;
    x = 0;
    count = 0;
    cout << "Number: ";
    cin >> num;
    cout << endl;
    
    for (int i = 0; i <= num; i ++)
        if ( i == 0)
        {
            cout << "( ";
        }
        
    while ( n <= num)
    {
        
        if ( num / n == 1)
        {
            cout << num << " )";
            break;
        }
        
        if ( num % n == 0)
        {
            num /= n; 
            cout << n;
            cout << " * ";
        }
        
        else
        {
            n ++;
        }
        
    }
}