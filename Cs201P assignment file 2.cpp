//      CS201 Assignment no 1 

#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

void DisplayMatrix(const int matrix[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void MultMatrixByScalar(int num, const int matrix[ROWS][COLS], int Result[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            Result[i][j] = num * matrix[i][j];
            cout << Result[i][j] << " ";
        }cout << endl;
    }cout << endl;
}


void AddMatrix(int FinalMatrix[ROWS][COLS], const int matrix[ROWS][COLS], int Matrix[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            FinalMatrix[i][j] = matrix[i][j] + Matrix[i][j];
            cout << FinalMatrix[i][j] << " ";
        }cout << endl;
    }cout << endl;
}

int main()
{
    int A[ROWS][COLS] = {{1,2}, {3,4}};
    int B[ROWS][COLS] = {{1,0}, {0,1}};
    int Result[ROWS][COLS];
    int FinalMatrix[ROWS][COLS];

    cout << "Matrix A: "<<endl;
    DisplayMatrix(A);

    cout << "Matrx B:"<<endl;
    DisplayMatrix(B);
    
    int num = 2;
    cout << "Matrix 2*B is:"<<endl;
    MultMatrixByScalar(num, B, Result);

    cout << "FInal Result MAtrix [A + (2*B)]" << endl;
    AddMatrix(FinalMatrix, A, Result);
}