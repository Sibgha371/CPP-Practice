//Calculate the sum of odd integers for a given upper limit.

#include<iostream> //Preprocessor directive or headeer file
using namespace std; //standard library
main()
{
// decalaration of variables
int sum, number,upper_Limit;
number = 1;

// taking input from user
cout << "Please enter the upper limit which you want to take sum";
cin >> upper_Limit;
while(number <= upper_Limit)
{
	if((number % 2) != 0)
	{
		sum = sum + number;
	}
	number = number + 1;
}
cout << "The sum of odd number of first " << upper_Limit << " from 1 is " << sum;
}


