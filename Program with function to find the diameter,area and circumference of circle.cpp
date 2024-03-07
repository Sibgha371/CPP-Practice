//Program with function to find the diameter,area and circumference of circle

//Dependenties
#include<stdio.h>
#include<conio.h>


//Main function
int main()
{
	//Global variables
	float r,ans=0;
	int choice;
	//Making functions
	double Area();
	double Diameter();
	double Circumference();
	
	//taking choices from user
	printf("1:press 1 to find Area\n");
	printf("2:press 2 to find Diameter\n");
	printf("3:press 3 to find Circumference\n");
	printf("4:press 4 to Exit\n");
	printf("Enter your choice:");
	scanf("%d",choice);
	

	
	//Switch statement
	switch(choice)
	{
		case 1:
			ans=Area();
			break;
		case 2:
		    ans=Diameter();
		    break;
		case 3:
		    ans=Circumference();
		    break;
		case 4:
		    break; 	
	}
	printf("%if",ans);
}
    double Area()
	{
        float ans,r;
        #define PI 3.14
       //Taking input from user
	    printf("Enter the radius:");
	    scanf("%if",&r);
        ans=PI * r * r;
        return ans;
	}
	double Diameter()
	{
	    float ans,r;
	    #define PI 3.14
	    //Taking input from user
	    printf("Enter the radius:");
	    scanf("%if",&r);
	    ans=2 * r;
	    return ans;
	}
	double Circumference()
	{
		float ans,r;
		#define PI 3.14
		//Taking input from user
	    printf("Enter the radius:");
	    scanf("%if",&r);
		ans=2 * PI * r;
		return ans;
	}












