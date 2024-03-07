//write a program to print (*)

//Dependenties
#include<stdio.h>

//Main function
int main()
{
	for(int uper_side=7;uper_side>=1;uper_side--){
		for(int lower_side=1;lower_side<=uper_side;lower_side++){
			printf("*");
		}
		printf("\n");
	}
	
}
