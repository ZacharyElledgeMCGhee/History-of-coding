#include <iostream>
#include <iomanip>
using namespace std;

//FUNCTION THAT FINDS THE KTH NUMBER OF THE NTH LINE 
/*

   NTH                  KTH
    1        1           1
    2       1 1          1,2
    3      1 2 1         1,2,3
    4     1 3 3 1        1,2,3,4
    5    1 4 6 4 1       1,2,3,4,5
    
*/
int Combinations(int n, int k) 
{
  if (k == 0 || k == n) 
  {
    return 1;
  } 
  else 
  {
    return Combinations(n - 1, k - 1) + Combinations(n - 1, k);
  }
}
//GATHER USER INPUT AND PUT INTO FUNCTION
int main()
{
	int n, k;
	cout << "Enter an Integer: "; 
	//GETS THE NTH TERM TO BE CALLED
	cin >> n;
	cout << "Enter another Integer: "; 
	//GETS THE KTH TERM TO BE CALLED
	cin >> k;
	cout << "Combinations(" << n << "," << k << ") = " << Combinations(n,k);
	//SIMILAR TO CALCULATOR COMPUTATION (N[C]K)
}

