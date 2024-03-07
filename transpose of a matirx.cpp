#include<iostream>
using namespace std;

// Constant values
const int maxrow = 3;
const int maxcolumn = 3;

// Read matrix function
void readmatrix(int array[maxrow][maxcolumn])
{
    int row, col;
    for (row = 0; row < maxrow; row++)
    {
        for (col = 0; col < maxcolumn; col++)
        {
            cout << "\nEnter the row col element " << "[" << row << "," << col << "]: ";
            cin >> array[row][col];
        }
        cout << endl;
    }
}

// Display matrix function
void displayMatrix(int array[maxrow][maxcolumn])
{
    int row, col;
    for (row = 0; row < maxrow; row++)
    {
        for (col = 0; col < maxcolumn; col++)
        {
            cout << array[row][col] << "\t";
        }
        cout << "\n";
    }
}

// Transpose of a matrix
void TransposeMatrix(int array[maxrow][maxcolumn], int transposedArray[maxrow][maxcolumn])
{
    for (int row = 0; row < maxrow; row++)
    {
        for (int col = 0; col < maxcolumn; col++)
        {
            transposedArray[col][row] = array[row][col];
        }
    }
}

int main()
{
    int array[maxrow][maxcolumn];
    cout << "************Input section*************";
    readmatrix(array);

    cout << "************Read matrix*************" << endl;
    displayMatrix(array);

    int transposedArray[maxrow][maxcolumn];
	// New matrix for the transpose
    TransposeMatrix(array, transposedArray);

    cout << "************transpose of a matrix*************" << endl;
    displayMatrix(transposedArray);

    return 0;
}

