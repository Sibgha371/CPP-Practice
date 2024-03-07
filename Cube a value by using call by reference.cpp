//Cube a value by using call by reference

//Dependenties
#include<stdio.h>
int CubeByReference(int *nptr);

//MAin Function
int main()
{
	int number;
	printf("Enter the number whoes cube you want : ");
	scanf("%d",&number);
	printf("The original value of number is %d\n",number);
	number = CubeByReference(&number);
	printf("The cube value of number is %d",number);
	return 0;
}

int CubeByReference(int *nptr)
{
    *nptr = *nptr * *nptr * *nptr;
    return *nptr;
}
