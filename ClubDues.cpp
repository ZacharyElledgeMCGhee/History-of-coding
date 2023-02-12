// Zachary Elledge-McGhee
// Club Dues
// 12-2-2020

#include <iostream>
#include <fstream>
#include <string>
#include "p2set.h"

using namespace std;

int main()
{
    
    // create a set to holdMembers the names of members
    Set<string> members;
    initialize(members);

    // initialize variables
    string Ol, N;
    int pledge = 0, member = 0, pledgeClass = 0, memberClass = 0;

    // file input
    ifstream oldMembers, newPledge;
    oldMembers.open("8A_past.txt");
    newPledge.open("8A_newPledge.txt");
    
    oldMembers >> Ol >> Ol >> memberClass;
    getline(oldMembers, Ol);

    // put the oldMembers members from the file into set
    for (int i = 0; i < memberClass; i++)
    {
        getline(oldMembers, Ol);
        insert(members, Ol);
    }

    newPledge >> N >> N >> pledgeClass;
    getline(newPledge, N);
    
    // put the newPledge members (pledges) into a set
    for (int i = 0; i < pledgeClass; i++) 
    {
        getline(newPledge, N);
        
        if (contains(members, N))
            member++;
        else
            pledge++;
    }
    
    // output the dues for each and the total 
    cout << "old Member Dues: $" << member * 62 << endl;
    cout << "new Member Dues: $" << pledge * 80 << endl;
    cout << "Total expected:  $" << member * 62 + pledge * 80 << endl << endl;
    cout << "Two-year membership: " << memberClass + pledge;
}
