#include <iostream>
using namespace std;
int main()
{
    int i, k = 0;
    char ch[100];
    cout << "Original: ";
    cin >> ch;
    for (i=0; ch[i]!='\0';i++)
    {
        k++;
    }
    cout << "Reversed: ";
    for (i = k; i >=0; i--)
    {
        cout<< ch[i];
    }
}