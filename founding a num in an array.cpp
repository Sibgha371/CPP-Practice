#include<iostream>
using namespace std;
int main()
{
	int z, i;
	int a[100];
	for(i =0;i<100;i++)
	{
		a[i]=i;
	}
	
	int found = 0;
	cout << "Write the number you want to find in this array: ";
	cin >> z;
	for(i=0;i<100;i++)
	{
		if(z == a[i])
        {
    	   found = 1;
    	   break;
	    }
	}
    
	if(found = 1)
	{
		cout<<"We found the number at index"<< i;
	}
	else{
		cout<<"The number is not found";
	}
    	
}
