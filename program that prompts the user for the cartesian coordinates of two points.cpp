//Write a program that prompts the user for the cartesian coordinates of two points (x1,y1)and(x2,y2)and display the distance between them 

//Dependenties
#include<stdio.h>
#include<math.h>

//Function prototype
float distance(float a1,float b1,float a2,float b2);

//Function definition
float distance(float a1,float b1,float a2,float b2)
{	float dist;
	dist = sqrt((a2-a1)*(a2-a1) + (b2-b1)*(b2-b1));
	return dist;
}
	
//Main function 
int main()
{
	//Global variables
    float x1,x2,y1,y2,dist;
    
	//Taking inut from user
	printf("Enter values like <x1,y1> : ");
	scanf("%f,%f",&x1,&y1);
	
	printf("Enter values like <x2,y2> : ");
	scanf("%f,%f",&x2,&y2);
	
	dist = distance(x1,x2,y1,y2);
	printf("\nThe Distance between these points is %f",dist);
}





