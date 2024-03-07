#include <iostream>				//Including iostream header files
using namespace std;

int main(){	
	int var1 = 0, var2 = 0, var3 = 0;	//Declare and intialize 3 integer variables
	cout<< "Enter First Value: ";		//Prompt to get first variable value
	cin>> var1;				// Save value in first variable
	cout<< "Enter Second Value: ";	//Prompt to get second variable value
	cin>> var2;				// Save value in second variable
	var3 = var1 && var2;			// Performing logical AND using && operators
	cout<<"Logical AND is "<< var3 <<endl;	// Printing result of Logical AND
	var3 = var1 & var2;			// Performing Bitwise AND using & operators
	cout<<"Bitwise AND is "<< var3<<endl;	// Printing result of  Bitwise AND
    var3 = var1 || var2;			// Performing logical OR using || operator
	cout<<"Logical OR is "<< var3 <<endl;  // Printing result of  Logical OR 
	var3 = var1 | var2;			// Performing Bitwise OR using | operator
	cout<<"Bitwise OR is "<< var3<<endl; // Printing result of  Bitwise OR
	}



