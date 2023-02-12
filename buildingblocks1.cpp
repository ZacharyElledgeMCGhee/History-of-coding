#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "p2set.h"
#include "p2priorityqueue.h"

using namespace std;

int main ()
{
    //initiate variables
    int prime, k, y, size, count, value, number;
    string list;
    stringstream ss;
    bool block;
    
    //create and initialize PriorityQueue
    PriorityQueue<int, int> p;
    initialize(p);
    
    //create and initialize Set
    Set<int> factorial;
    initialize(factorial);
    
    
    //Gather user input
    cout<< "Prime Factors: ";
    getline(cin, list);
    ss << list;
    cout << "K: ";
    cin >> k;
    cout << endl;
    
    // put input into PriorityQueue and set
    while(ss >> prime)
    {
        if(!contains(factorial,prime))
        {
            push(p,prime,(prime -1));
            insert(factorial, prime);
        }
    }
    
    if(!contains(factorial,1))
    {
        push(p,1,-1);
    }
    
    size = 0;
    count = 4;
    // all the maths
    while(size < k)
    {
        block = false;
        value = 2;
        
        while(value < count)
        {
            if(count % value ==0)
            {
                if(contains(factorial, value))
                {
                    block = true;
                }
                else
                {
                    block = false;
                    break;
                }
            }
            value++;
        }
        if(block && !contains(factorial,count))
        {
            push(p,count, (count *-1));
            insert(factorial, count);
            size++;
        }
        count++;
    }
    number = 1;
    
    while(!isEmpty(p))
    {
        if(number ==k)
            y = pop(p);
        else
            pop(p);
        number++;
    }
    
    //destroy 
    destroy(p);
    destroy(factorial);
    
    cout << "Result: "<<y;
}