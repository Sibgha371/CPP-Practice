//Table of the number of input

//dependenties
#include<stdio.h>

//main function
int main(){
	//Global variables
	int tab,c,ans;
	
	//input
	printf("Enter table number=");
	scanf("%d",&tab);
	
	//for loop
	c=1;
	while(c<=10){
		ans=tab * c;
		printf("%d * %d = %d\n",tab,c,ans);
		c++;
	}
}
