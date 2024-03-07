//program that produce output is
//0  1
//1  2
//2  4
//3  8
//4  16
//5  32
//6  64

#include<stdio.h>
int main()
{
	//Global variables
	int i,num;
	for(i=0;i<=6;i++){
		printf("%3d %3d\n",i,num);
		num=num*2;
	}
}

