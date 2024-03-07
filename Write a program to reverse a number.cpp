//Write a program to reverse a number

//Dependenties
#include<stdio.h>

//Main function
int main()
{
	//Variales
	int n,rem,reverse=0;
	
	//Taking input from user
	printf("Enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		reverse =reverse *10+rem;
		n=n/10
		;}
		printf("%d",reverse);
}
