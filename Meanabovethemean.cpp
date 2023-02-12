#include <iostream>
#include <iomanip>
using namespace std;

//	CREATE A FUNCTION TO TAKE THE MEAN
float Mean( int A[ ], int size ) //Finds total of 'A[]' over 'size'
{
	float total=0;
	for(int j=0 ; j<size ; j++)
	{
		total += A[j];
	}
	if (total == 0 && size == 0)
		return 0;
	return (total/(float)size);
}

// CREATE THE MAIN FUNCTION
int main()
{
	//CREATE VALUES AND TAKE INPUT
	int size, values1[100],values2[100]={0}, count=0; //Initialize
	float mean, mean2;
	cout << "What size array? ";
	cin >> size;
	for(int i=0 ; i<size ; i++)
	{
		cin >> values1[i];
	}
	//FIND MEAN
	mean = Mean(values1,size); //First use of Mean()
	for(int k=0 ; k<size ; k++)
	{
		if(values1[k] > mean) //Find higher values
		{
			values2[count] = values1[k];
			count++;
		}
	}
	//FINAL OUTPUT...MEAN ABOVE THE MEAN
	mean2 = Mean(values2,count); // Second use of Mean()
	cout << fixed << setprecision(2) << mean2 << " is the mean above the mean."; //Final output
}