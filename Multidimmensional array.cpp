#include<iostream>
using namespace std;
main()
{
	//declaration of multidimensional array...here the rows are teo and columns are three
	// index of rows>>  0           1
	//index of col> 0  1  2    0  1  2
	int x[2][3] = {{55,66,77},{11,22,33}};
	for(int row = 0; row < 2; row++)
	{
		for(int col = 0; col < 3; col++)
		{
	//Here we have two rows so we take first and the col is second
	       cout << x[1][2]<< endl;
		}
	}
}

