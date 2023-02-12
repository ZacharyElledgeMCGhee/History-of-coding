#include <iostream>
#include "p2queue.h"
#include <fstream>
#include <ostream>

using namespace std;

// using a queue create an output file for different cats/dogs and adoptions

int main()
{
//create the queues needed
Queue<string> Dog;
Queue<string> Cat;
Queue<string> Adopt;

//initialize
initialize(Dog);
initialize(Cat);
initialize(Adopt);

//create strings and int
ifstream fin;
ofstream fout;
string d = "dog";
string c = "cat";
string cs;
string rs = "rescue";
string rq = "request";
string name;
string type;
string cde;
string a;

string filename;
filename = "actions.txt";
//open the file 
fin.open(filename.c_str());

if (fin.is_open())
{
	while(fin >> cs)
		{
			fin >> type;
			if (type == "rescue")
			{
			fin >> cde;
				
				if ( cde == d)
				{
				//push dog name into dog queue
				fin >> name;
				push (Dog,name);				
				}
				
				if (cde == c)
				{
				//push cat name into queue
				fin >> name;
				push (Cat,name);				
				}
			}
			if (type == "request")
			{
				
				fin >> cde;
				if (cde == d)
				{
				// pop dog queue
				pop (Dog);
				push (Adopt,d);
				}
				
				if (cde == c)
				{
				// pop cat queue
				pop (Cat);
				push (Adopt,c);
				}
				
			}
			
		}
		
}
// If the file cannot be opened
else 
{
	cout << "unable to open file...\n";
}

fout.close();
//file creation
filename = "adoptions.txt";
fout.open(filename.c_str());
if (fout.is_open())
{
	while (!isEmpty(Adopt))
	{
		//file output
		fout << pop(Adopt) << endl;
	}
}
//destroy the queues
destroy(Dog);
destroy(Cat);
destroy (Adopt);

}