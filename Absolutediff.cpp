#include <iostream>
#include <sstream>
using namespace std;

// given a set of rules, determine if a list is a good sequence or bad
int main()
{
	//initiate the variables used
    string list;
    bool absolute = true;
    int nums[50]= {0};
    int size = 0;
    int num1 = 0;
    int num2 = 0;
    int diff = 0;
    int missing = 0;
    
	//gather user input 
    cout << "Enter list: ";
    getline(cin, list);
    // take in the input so that we can analyze
    stringstream ss(list);
    ss >> num1;
    
	//find the differences between the numbers
    while (ss >> num2)
    {
        diff = num2 - num1;
        if (diff < 0)
            diff = diff * -1;
        nums[diff]++;
        num1 = num2;
        size++;
    }
	// make sure the differences have 1, 2, 3, etc...
    for (int i = 1; i < size+1 && absolute; i++)
    {
        if (nums[i]==0)
        {
            absolute = false;
            if (missing ==0)
            {
                missing = i;
            }
        }
    }
	
	// output if it is a good or bad sequence. 
    if (absolute == true)
        cout << "Good sequence.";
    else
        cout << "Bad sequence: missing "<< missing << ".";
}