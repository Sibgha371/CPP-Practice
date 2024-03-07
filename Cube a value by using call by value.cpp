//Cube a value by using call by value

//Dependenties
#include<stdio.h>
int CubeByValue(int a);

//MAin Function
int main()
{
	int number;
	printf("Enter the number whoes cube you want : ");
	scanf("%d",&number);
	printf("The original value of number is %d\n",number);
	number = CubeByValue(number);
	printf("The cube value of number is %d",number);
	return 0;
}

int CubeByValue(int a)
{
	a = a * a * a;
	return a;
}
