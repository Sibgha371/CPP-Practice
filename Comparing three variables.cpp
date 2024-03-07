//DEpendenties

#include<stdio.h>

//Main function
int main()
{
	//Global variables
	int a,b,c;
	
	//Take input from user
	printf("Enter three numbers like 2,2,2 : ");
	scanf("%d,%d,%d",&a,&b,&c);
	
	//If else statement 
	if(a >b)
	{
		if(a > c)
	{	printf("%d is the largest number",a);}
		else
		{
			printf("%d is the lardest number",c);
		}
	} else {
		if(b > c){
			printf("%d is the largest number",b);
		} else {
			printf("%d is the largest number",c);
		}
	}
}
