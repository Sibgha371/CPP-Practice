#include<iostream>
using namespace std;

int main()
{
	int table_of;
	cout << "Write the number which the table yo want: " ;
	cin >> table_of;
	for(int x = 1; x <= 10; x++)
	{
	   cout << table_of << " X " << x << " = " << table_of * x << endl;
	}
}
