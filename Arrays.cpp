#include<iostream>
using namespace std;
int main()
{
	//Declaration of arrays 
	int x[3] = {2,100,50};
	//here 3 is the index number or the number how many value are we going to store
	cout << x[1]<<endl;
	
	string name[4] = {};
	for(int i = 0;i <4;i++)
	{
		cout<< "Enter name: ";
		cin >> name[i];
	}
    cout<< name[3]<< endl;
	cout<< name[2]<< endl;
}
