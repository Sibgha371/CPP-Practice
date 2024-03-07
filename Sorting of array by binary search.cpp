//Sorting of array by binary search

//Dependenties
#include<stdio.h>

//MAin function
int main()
{
	//Local variables
	int search_index;
	int arr[] = {3,4,5,7,12,34,67,64,68,78,89,458,524,647,678,965,4445};
	int element = 89;
	int size = sizeof(arr)/sizeof(int);
	search_index = binarySearch(arr,size,element);
	printf("The index of %d element is %d ",element,search_index);
	return 0;
}

//Function deefinition
int binarySearch(int arr,int size,int element)
{
	int low,mid,high;
	low = 0;
	high =size-1;
	while(low<=high)
	{

		mid = (low+high)/2;
		if (arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
		    low = mid+1;
		}
		else
		{
            high = mid-1;
		}
	}
	return -1;
}
