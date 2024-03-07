//A program to display the first 15 even numbers

//Dependenties
#include<stdio.h>

//main function
int main()
{
	//Global variables
	int i=0,n=2;
	for(i=1;i<=15;i++){
	    printf("%3d. %3d\n",i,n);
	    n=n+2;
	}
}

