#include<iostream>
using namespace std;
int age = 30;

int main()
{
	//here i have a local variable age 
	int age = 26;
	cout<<age<<endl;
	//it will give 26
	//but what if i want to print the globale (scope) variable then i have to...
	//.. put this syymbol :: (unary scope resolation operator) so look
	cout<< ::age<<endl;
	
	//CAll by refrence 
	cout << &age;
}
