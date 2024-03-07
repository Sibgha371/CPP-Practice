#include<iostream>
using namespace std;
int main()
{
	int num1[3],num2[3],i,equals= 0;
	cout << "Enter the three numbers in first array: "<<endl;
	for(i=0 ;i<3 ;i++)
	{
		cin >> num1[i];
	}
			cout << "Enter the three numbers in second array: "<<endl;
	for(i=0 ;i<3 ;i++)
	{
		cin >> num2[i];
	}
	cout<<"*************************DISPLAY******************************"<<endl;
	cout<<"*************************SECTION******************************"<<endl;
    cout<< " The first array is: "<<endl;
	for(i=0 ;i<3 ;i++)
	{
		cout<<"\t" << num1[i];
	}
	    cout<< endl;

    cout<< " The second array is: "<<endl;
	for(i=0 ;i<3 ;i++)
	{
		cout<<"\t" << num2[i];
	}
	cout<<endl;
	cout<<"***************************************"<<endl;
	for(i=0; i <3; i++)
	{
		if (num1[i] == num2[i])
		{
			equals = 1;
			break;
		}
		equals = 0;
	}
	if(equals==1)
	{
		cout<<"The arrays are equal";
	}
	else
	{ 
	    cout << "The arrays are not equal";
	}
	
}
