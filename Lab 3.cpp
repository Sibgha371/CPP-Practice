// LAB -- 3
#include<iostream>
using namespace std;

void displayDiagonal(int row,int column)
{
	for(int i=0; i < row ; i++)
	{
		for(int j= 0; j< column; j++)
		{
			if(i == j)
			{
				cout<< i+1 <<" ";
			}
			else
			{
				cout<< 0 << " ";
			}
		}
		cout <<endl;
	}
}
main()
{
	int row = 0,column = 0;

	cout << " please enter the number of rows: ";
	cin >> row;
	
    cout << " please enter the number of columns: ";
	cin >> column;
	
	if(row == column)
	{
		displayDiagonal(row,column); 
	}
	else 
	{
		cout<< "Wrong input! Num of rows should be equal to num of columns";
	}
	return 0;
}
