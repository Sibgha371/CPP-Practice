////write a Program for addition,subtraction,multiplication and division

//Dependenties
#include<stdio.h>
//Main function
int main()
{
	//Global variables
	int choice;
	float a,b,ans=0;

   //Functions for arithemetic opertions
   float Add(float a,float b);
   float Subtract(float a,float b);
   float Multiply(float a,float b);
   float Division(float a,float b);
   
   
	//Input for cases
do{
	printf("\n\n1:Press 1 for addition\n");
	printf("2:press 2 for subtraction\n"); 
	printf("3:press 3 for multiplication\n");
	printf("4:press 4 for division\n");
	printf("5:press 5 to Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	

	switch(choice)
	{
		case 1:
			ans=Add(a,b);
			printf("\n%0.2f",ans);
			break;
		case 2:	
		
			ans=Subtract(a,b);
			printf("\n%0.2f",ans);
			break;
		case 3:
			ans=Multiply(a,b);
			printf("\n%0.2f",ans);
			break;
		case 4:
			ans=Division(a,b);
			printf("\n%0.2f",ans);
			break;
		case 5:
			break;
	}
	
	}while(choice!=5);
	
}
  //Functions definations
  float Add(float a,float b)
  {
  	float ans;
  		
	//Taking input from user
	printf("Enter two integers :");
	scanf("%f,%f",&a,&b);
  	ans=a+b;
  	return ans;
  }
  float Subtract(float a,float b)
  {
  	float ans;
  		
	//Taking input from user
	printf("Enter two integers :");
	scanf("%f,%f",&a,&b);
  	ans=a-b;
  	return ans;
  }
  float Multiply(float a,float b)
  {
  	float ans;
  		
	//Taking input from user
	printf("Enter two integers :");
	scanf("%f,%f",&a,&b);
  	ans=a*b;
  	return ans;
  }
    float Division(float a,float b)
    {
    	float ans;
    		
	//Taking input from user
	printf("Enter two integers :");
	scanf("%f,%f",&a,&b);
    	if(a>b)
    	{
    		if(b==0)
    		{
    			printf("Cannot divided by zero");
    			return ans=0;
			}
			ans=a/b;
		}
		else
		ans=b/a;
		return ans;
	}

