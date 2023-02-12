#include <iostream>
#include "p2stack.h"

using namespace std;

// make a function to test the expression to determine if it is well well-formed
bool Balancing(string ex)
{
	char x;
	Stack<char> stk;
	initialize(stk);
   
   for (int i=0; i< 10; i++)
   {
       if (ex[i]=='('||ex[i]=='[')
       {
           // Take in user input to be tested
           push(ex[i]);
           continue;
       }
	   //make sure user input is actually there
       if (isEmpty(stk))
       return false;
       switch (ex[i])
       {
        case ')':
            x = push(stk);
            pop(stk);
            if (x =='{' || x =='[')
               return false;
            break;
           
        case ']':
            x = push(stk);
            pop(stk);
            if (x =='(' || x == '{')
               return false;
            break;
       }
   }
}

int main()
{
	//initiate variables
   string ex;
   initialize(stk);
   cout<<"Enter expression:";
   cin>>ex;
//take in user input to be compared
   if (Balancing(ex))
       cout << "Expression "<<ex<<" is well-formed"<<endl;
   else
       cout << "Expression "<<ex<<"is not well-formed"<<endl;
   return 0;
}