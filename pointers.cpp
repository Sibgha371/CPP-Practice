#include<iostream>
using namespace std;
main()
{
	//playing with Pointers 
	int cat = 30;
	string catname = "Bella";
	
	//now appointed a pointer( the pointer will have the same data type as the variable)
	int *x;
	x =  &cat;
	cout<< x << endl;
	//Now a strin data type pointer
	string *y;
	y = &catname;
	cout << y << endl;
	
}
