//Program to make output in the form of
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2 
//1 

//Dependenties 
#include<stdio.h>

///main Function
int main()
{
	//Global varibles
	int i,j;
	
	//using for loop
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		
		}
		printf("\n");
	}
}
