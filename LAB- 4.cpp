//LAB --- 4
/*Write a program in which you have to declare an integer array of size 10 and initializes it with numbers
of your choice. Find the maximum and minimum number from the array and output the numbers on the screen. 
For finding the maximum and minimum numbers from the array you need to declare two functions findMax 
and findMin which accept an array and size of array (an int variable) as arguments and find the max min 
numbers, and return those values.*/

#include<iostream>
using namespace std;
// FUnction to find the minimum number
int findMin(int array[],int Size)
{
	int min = array[0];
	for(int i = 0; i < Size; i++)	
	{
		if( min > array[i])
		{
			min = array[i];
		}
    }
	cout<< " The minimum Value in this array is: "<< min << endl;
	
}

// Function to find the minimum number
int findMax(int array[],int Size)
{
	int max = array[0];
	for(int i = 0; i < Size; i++)	
	{
		if( max < array[i])
		{
			max = array[i];
		}
    }
	cout<< " The maximum Value in this array is: "<< max << endl;
}

// Main function
int main()

{
	const int Size = 10;
	int array[Size] = {12,45,3,5,7,9,6,2,8,4};
	findMin(array,Size);
	findMax(array,Size);
	
}
