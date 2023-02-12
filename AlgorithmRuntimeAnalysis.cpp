#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) 
{
    if(a > b) 
        return a;
    return b;
}

void cR(int coin[],int n) 
{
    int Others[n+1];
    int i;
    Others[0] = 0;
    Others[1] = coin[0];
    vector < vector<int>> v(n);
                                        // push_back has time complexity of O(1)
    v[0].push_back(1);
                                        // will run N times 
    for(i = 2; i <= n; i++)
    {
        Others[i] = max(coin[i-1] + Others[i-2], Others[i-1]);
        
        if(coin[i-1] + Others[i-2]>Others[i-1])
        {
            if(i==2)
            {
                v[1].push_back(i); // push_back has time complexity of O(1)

            }
            else
            {
                v[i-1]=v[i-3];
                v[i-1].push_back(i); // push_back has time complexity of O(1)
            }
        }
        else
        {
            v[i-1]=v[i-2];
        }
    }
    
    cout << "Max Value: " << Others[n] <<endl;
    cout << "Best set: ";
                                            // O(n)
    for(i=v[n-1].size()-1;i>=0;i--)
    {
        cout << v[n-1][i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n=6;
    int val[n] = {5,  1,  2,  10,  6,  2};
    cR(val,n);
    cout << "Runtime Analysis: O(n^2)";
}