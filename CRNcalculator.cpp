// program to calculate compounding interest 
// Specifically on the CRN / Nodes platform


#include <iostream>

using namespace std;

int main()
{
    
    double nodecount;
    double crnPrice;
    double crnCount;
    double waitTime;
    double compound;
    double days = 0;
    double walletWorth = 0;
    double comp;
    double wantNodes;
    
    cout << "How many nodes do you have? " << endl;
    cin >> nodecount;
    cout << "What is the price of CRN?" << endl;
    cin >> crnPrice;
    cout << "How much CRN do you have in your wallet?" << endl;
    cin >> crnCount;
    cout << "How many days do you want to wait?" << endl;
    cin >> waitTime;
    cout << "Do you always want to make another node when you can? Y/N... 1/0" << endl;
    cin >> comp;
    
    cout << "Desired node count?" << endl;
    cin >> wantNodes;
    
    
    while ( waitTime >= 0)
    {
        days++;
        if (nodecount > 1)
        {
            double y = 0;
            y = nodecount;
            while (y>0)
            {
                crnCount++;
                y = y- 1;
            }
        }
        else
            crnCount++;
            
        if (wantNodes > nodecount)
        {
            if (crnCount >= 20)
            {
                if (comp = 0)
                {
                    cout << "make another node? Y/N...1/0" << endl;
                    cin >> compound;
                    if (compound == 1)
                    {
                        nodecount++;
                        compound = 0;
                        crnCount = crnCount - 20;
                    }
                }
                else 
                {
                    nodecount++;
                    compound = 0;
                    crnCount = crnCount - 20;
                }
            }
        }
        else
        {
            crnCount = crnCount;
        }
        walletWorth = crnCount * crnPrice; 
        
        cout << "After " << days << " days, you have " << nodecount << " nodes, and " ;
        cout << crnCount << "CRN in your wallet, worth: $" << walletWorth << endl;
        
        waitTime = waitTime - 1;
    }
    // count node 
    
    
    
    
    
}
