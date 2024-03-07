//write a program to calculate the sum of first ten odd numbers also print numbers 

//Dependenties
#include<stdio.h>

//Main function
int main()
{
	//Global variables
	int sum = 0,number = 1;
	
	//Output for odd numbers
	while(number <= 10 ){
		number = number + 2;
		printf("n = %d\n",number);
		sum = sum + number;
	}
	printf("sum = %d",sum);
}
