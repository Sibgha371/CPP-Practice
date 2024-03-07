//Program to display numbers in the range of 0 and 15

//Dependenties
#include<stdio.h>

int main()
{
	//Global variables
	int num=0,sum=0;
	
	do{
			//input
     	printf("Enter an integer value=");
     	scanf("%d",&num);
		sum=sum+num;
	}while(num>=0&&num<=15);
	printf("sum of all the integer is %d",sum);
}
