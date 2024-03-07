#include<iostream>
using namespace std;

int main()
{
	char grade;
	cout << "Enter your grade points: ";
	cin >> grade;
	grade = toupper(grade);
	switch(grade)
	{
	
		case'A':
			cout<<"Excelent";
		break;
		case'B':
			cout<<"Nice";
		break;
		case'C':
			cout<<"Good";
		break;
		case'D':
			cout<<"thums-up";
		break;
		default:
			cout<<"you need to work hard";
	}
}
