#include<iostream>
using namespace std;
// here while using the array within function the first parameter is the name of the array and the second 
// one is the range or index of array

 int super(int x[],int y)
 {
 	for(int z=0; z < y;z++)
 	{
 		cout<< x[z]<<endl;
	}
 }
int main()
{
	int check[4] ={23,45,7,8};
	int age[5] = {2,4,6,8,9};
	
	super(check,4);
	cout<<"***************************"<<endl;
	super(age,5);
}
