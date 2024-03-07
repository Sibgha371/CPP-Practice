/* Array Manipulation - Flipping of a Matrix (reversing the row order): This program reads a 
matrix (two-dimensional array), displays its contents and also displays the flipped matrix 
*/

#include<iostream>
using namespace std;
//Constant values
 const int maxrow = 3;
 const int maxcolumn = 3;
 
 //Read matrix function
 int readmatrix(int array[maxrow][maxcolumn])
 {
    int row,col;
    for(row = 0;row < maxrow; row++)
    {
    	for(col = 0;col < maxcolumn; col++ )
    	{
    		cout<< "\nEnter the row col element " << "[" <<row <<","<<col<<"]: ";
    		cin >> array[row][col];
		}
		cout<< endl;
	}
 	
 }
 
 //DIspaly matrix function
 int displayMatrix(int array[maxrow][maxcolumn])
 {
    int row,col;
    for(row = 0;row < maxrow; row++)
    {
    	for(col = 0;col < maxcolumn; col++ )
    	{
    		
    		cout << array[row][col]<<"\t";
		}
		cout << "\n";
	} 
 	
 }
 //Row flip matrix function
 int rowFlippedMatrix (int array[maxrow][maxcolumn])
 {
 	int row,col;
 	for(row = maxrow - 1;row >= 0; row--)
 	{
 		for(col = 0;col < maxcolumn ; col++) 
 		{
		   cout << array[row][col] <<"\t";
		}
		cout<<"\n";
	}
 }
 
 //Column flip matrix function
 int columnFlippedMatrix (int array[maxrow][maxcolumn])
 {
 	int row,col;
 	for(row = 0;row < maxrow; row++)
 	{
 		for(col = maxcolumn -1;col >= 0 ; col--) 
 		{
		   cout << array[row][col] <<"\t";
		}
		cout<<"\n";
	}
 }
main()
{
	int array[maxrow][maxcolumn];
	cout << "************Input section*************";
	readmatrix(array);
	cout << "************Read matrix*************"<<endl;
	displayMatrix(array);
	cout << "************Row Flipped matrix*************"<<endl;
	rowFlippedMatrix (array);
	cout << "************Column Flipped matrix*************"<<endl;
	columnFlippedMatrix (array);
}
