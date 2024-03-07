#include<iostream>
using namespace std;
main()
{
	int matrix[2][3],row,columns,maxrows = 2,maxcolumns = 3;
	//get values for matrix
	for(row =0; row < maxrows; row++)
	{
		for(columns = 0; columns < maxcolumns;  columns++)
		{
			cout << "please enter a value for position "<<"[" << row <<","<< columns<<"] : ";
			cin >> matrix[row][columns];
		}
	}
	cout << "*******DISPLAY SECTION*******"<< endl;
	//display values
	for(row =0; row < maxrows; row++)
	{
		for(columns = 0; columns < maxcolumns;  columns++)
		{
			cout << "\t"<< matrix[row][columns];
		}
		cout << endl;
	}
}
