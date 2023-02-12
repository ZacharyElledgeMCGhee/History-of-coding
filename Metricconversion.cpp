#include <iostream>
#include <iomanip>
using namespace std;
//FUNCTION TO CONVERT FEET AND INCHES TO CM
float convert(float feet, float inches)
{
	float cm = (2.54*inches) + (2.54*12*feet);
	return cm;
}
//MAIN FUNCTION 
//GATHER USER INPUT IN FEET AND INCHES
int main()
{
	int f, i;
	cout << "Feet? ";
	cin >> f;
	cout << "Inches? ";
	cin >> i;
	
	//AFTER RUNING THE FUNCTION, OUTPUT THE RESULT IN CM
	cout << "The length is " << convert(f,i) << " cm.";
}