//Reverse a number

#include<iostream>
using namespace std;
main()
{
	int number,digit;
	cout << "Enter 4-digit number: ";
	cin >> number;
	
	digit = number % 10;
	cout << "The digits are :";
	cout << digit<<endl;
	cout <<"the number is" <<number<<endl;
	
	number = number / 10;
	cout << "after taking / 10 the number is :"<< number;
	
}
