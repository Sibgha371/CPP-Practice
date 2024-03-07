#include<iostream>
using namespace std;
int main()
{
	int i,f,n;
	f = 1;
	i = 1;
	cout<<"Chose the number youn want to take fictorial = ";
	cin>>n;
	while(i <= n)
	{
		f = f*i;
		i++;
	
	}
	cout<<"The fictorial of"<<n << "is" << f << endl;
}
