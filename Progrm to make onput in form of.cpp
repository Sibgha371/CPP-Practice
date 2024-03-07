//Progrm to make a input in form of
//1
//1 2
//1 2 3
//1 2 3 4 
//1 2 3 4 5

//Dependenties 
#include<stdio.h>

///main Function
int main()
{
	//Global varibles
	int i,j;
	
	//using for loop
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
