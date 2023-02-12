#include <iostream>
#include "p2map.h"
#include "p2priorityqueue.h"
#include <fstream>

using namespace std;

int main()
{
    // create variables
    string filename, name, Tname[100], sorted, hold;
    int count = 0;
    ifstream fin;
    ofstream fout;
    // create and initialize map
    Map<string, int> names;
    initialize(names);
    // gather user input
    cout << "Input file: ";
    cin >> filename;
    cout << "Ordering complete.";
    //  open the file
    fin.open(filename.c_str());
    
    while(fin >> name)
    {
        // if something is already in the map, we assign it to 2 so that we know there are multiples
        Tname[count] = name;
        if(has_key(names,name))
        {
            assign(names, name, 2);
        }
        else if(count % 2 == 0)
        {
            assign(names, name, 5);
        }
        else if(count % 2 == 1)
        {
            assign(names, name, 10);
        }
        count++;
    }
    
    fin.close();
    filename = "fixed_" + filename;
    fout.open(filename.c_str());
    bool pass1 = true;
    
    // finds the name that should be first
    for(int i = 0; pass1; i++)
    {
        if(lookup(names, Tname[i]) == 5)
        {
            sorted = Tname[i];
            pass1 = false;
        }
    }
    
    for(int i = 0; i < count/2; i++)
    {
        bool pass = true;
        for(int q = 0; pass; q++)
        {
            // find names and print them out
            if(sorted == Tname[q])
            {
                // first then last name
                fout << Tname[q] << " " << Tname[q+1] << endl;
                sorted = Tname[q+1];
                // set the names to aaa so it doesnt show back up in the array
                Tname[q] = "aaa";
                Tname[q+1] = "aaa";
                pass = false;
            }
        }
    }
    fout.close();
    destroy(names);
}