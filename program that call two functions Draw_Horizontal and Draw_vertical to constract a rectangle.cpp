//Write a program that call two functions Draw_Horizontal and Draw_vertical to constract a rectangle.Also write functions Draw_Horizontal to draw to parallel
// horizontal lines,and the fuction Draw_vertical to draw two parallel vertical lines

//Dependenties
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

//Main function
void main()
{
	//Global variables
	int x,y,w,h;

	//Function prototypes
	void Draw_Horizontal(int x,int y,int w,int h);
	void Draw_vertical(int x,int y,int w,int h);
	
	/*request auto detection for graphics mode*/
	int gdriver= DETECT,gmode,errorcode;
	
	/*initialize graphics mode*/
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	
	printf("\nWidth of rectangle to be drawn :");
	scanf("%d",&w);
	
	printf("\nheight of rectangle to be drawn :");
	scanf("%d",&h);
	
	printf("\n starting point x of rectangle :");
	scanf("%d",&x);
	
	printf("\n starting point y of rectangle :");
	scanf("%d",&y);
	
	 Draw_Horizontal( x, y,w, h);
     Draw_vertical(x,y,w,h);
     getche();
}

//Function definition
void Draw_Horizontal(int x,int y,int w,int h);
{
	line(x,y,x+w,y);
	line(x,y+h,x+w,y+h);
}

//Function defination
void Draw_vertical(int x,int y,int w,int h);
{
	line(x,y,x,y+h);
	line(x+w,y,x+w,y+h);
}





