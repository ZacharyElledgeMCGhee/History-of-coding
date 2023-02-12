#include <iostream>

using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;
    cout << "Enter number: ";
    cin >> n;
    for(i = 2; i <= n / 2; ++i)
    {
        if (n == 1 || n == 2)
            break;
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true || n == 2)
    {
        if ( n == 1)
        {
            cout << n << " is not prime.";
        
        }
        if ( isPrime == true && n != 1)
            cout << n << " is prime.";
    }
    if (isPrime == false && n != 2)
        cout << n << " is not prime.";
}