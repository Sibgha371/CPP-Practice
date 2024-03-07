//program that gives the following output
//0 
//0 1
//0 1 2
//0 1 2 3
//0 1 2 3 4
//0 1 2 3 4 5

#include<stdio.h>
int main()
{
	//Global variables
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<=i;j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
}

