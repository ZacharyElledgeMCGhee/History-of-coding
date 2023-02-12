#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 100000000;

vector<long long> k(N + 1);
// p is for primes
vector<long long> p;
// f is for factors
vector<long long> f;
// x is unique, non-repeating factors
set<long long> x;

//finds total prime factors 
void primef(long long n) 
{
    for (int i = 2; i <= N; ++i) 
    {
        if (k[i] == 0) 
        {
            k[i] = i;
            p.push_back(i);
        }

        for (int j = 0; j < (int)p.size() && p[j] <= k[i] && i * p[j] <= N; ++j) 
        {
            k[i * p[j]] = p[j];
        }
    }

    for (long long prime : p) 
    {
        if (prime * prime > n)
            break;
        while (n % prime == 0) 
        {
            f.push_back(prime);
            x.insert(prime);
            n /= prime;
        }
    }
    if (n > 1) 
    {
        f.push_back(n);
        x.insert(n);
    }
}

int main()
{
    long long n;
    cin >> n;
    long long factorn = 1;

    for (long long i = 2; i <= n; i++)
    {
        factorn = factorn * i;
    }

    primef(factorn);
// return total prime factors and total of unique factors "x"
    cout << "Total Factors: " << f.size() << "\n";
    cout << "Distinct/Unique Factors: " << x.size() << "\n";
// runtime O(n!)
}