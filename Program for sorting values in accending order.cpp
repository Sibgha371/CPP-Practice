//Program for sorting values in accending order 

//Dependenties
#include<stdio.h>

//Main Function
int main()
{
	//GLOBAL VARIABLES
	int a[5];
	int i,j,hold;
	
	//In random form
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//In Accending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				hold = a[i];
				a[i] = a[j];
				a[j] = hold;
			}
		}

	}
	printf(" \n Data in accending order\n");
	for(i=0;i<5;i++)
	{
	    printf("%d\n",a[i]);
	}
	return 0;
	
}

