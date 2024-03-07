//Sorting of array by linear searching

//Dependenties
#include<stdio.h>

//Function definition
int linearSearch(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
          return i;
		}
	}
	return -1;
}

//MAin function
int main()
{
	int arr[] = {12,34,57,89,6,45,325,5,423211,6,8,90,64,32,46,3,324};
	int size = sizeof(arr)/sizeof(int);
	int element = 3;
	int searchindex = linearSearch(arr,size,element);
	printf("The index of %d element is %d",element,searchindex);
	
}
