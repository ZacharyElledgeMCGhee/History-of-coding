// Zachary Elledge-McGhee
// recursion : sum N without adjacent
// 11/13/2020

#include <iostream>
#include <sstream>
#include <cstddef>

using namespace std;

//set up a boolean for recursion
bool sNoAdj(int set[], int x, int place, int size) 
{
//when given a set of numbers, check if a given 
//sum can be created within that set
//the numbers cannot be adjacent
    if (x == 0)
        return true;
    else if (place >= size)
        return false;
//This statement here blocks the usage of adjacent numbers in the set
    else
        return sNoAdj(set, x - set[place], place + 2, size) || sNoAdj(set, x, place + 1, size);
}

int main()
{
//initiate variables
    int x, y;
//gather user input
    cout << "How many values? ";
//store the input
    cin >> y;
//create an array
    int* num = new int[y];
//gather user input of numbers in the array
    cout << "Enter numbers: ";
//put the input into the array
    for (int i = 0; i < y; i++) 
    {
        cin >> num[i];
    }
//gather user input for the total sum we are looking for
    cout << "Enter sum: ";
    cin >> x;
    cout << endl;
//run the recursive function
    if (sNoAdj(num, x, 0, y))// if it returns true, we will return this
        cout << "Yes, there is a subset that sums to " << x << ".";
//if the bool returns false, we return this
    else
        cout << "No, there is no subset that sums to " << x << ".";
//get rid of num... it sucked anyway
    delete[] num;
}