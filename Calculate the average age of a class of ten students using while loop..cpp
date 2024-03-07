//"Calculate the average age of a class of ten students using while loop.
// Prompt the user to enter the age of each student."

#include <iostream>
using namespace std;
int main()
{
	int number_of_student,i,age,Total_age,Averagea_age;
	i = 1;
	age = 0;
	Total_age = 0;
	cout << "Enter the number of students: ";
	cin >> number_of_student;
	
	
	while(i <= number_of_student)
	{
		cout << "\nEnter the age of " << i << " student : ";
		cin >> age;
		Total_age += age;
		i ++;
		cout << "\ntotal add age: " << Total_age;
	}
	Averagea_age = Total_age / number_of_student;
	cout << "\nAverage age is: " << Averagea_age;
	
}
