//Calculate the sum of odd integers for a given upper limit.

#include<iostream> //Preprocessor directive or headeer file
using namespace std; //standard library
main()
{
// decalaration of variables
int odd_sum, even_sum, num,upper_Limit;

// taking input from user
cout << "Please enter the upper limit which you want to take sum";
cin >> upper_Limit;

for(num = 1; num <= upper_Limit; num++);
{
	if((num = num % 2) == 0)
	{
		even_sum = even_sum + num;
	}
	else
	{
		odd_sum = even_sum + num;
	}
}
cout << " the sum of even numbers from 1 to "<< upper_Limit << " is " << even_sum;
cout << " the sum of odd numbers from 1 to "<< upper_Limit << " is " << odd_sum;
}


