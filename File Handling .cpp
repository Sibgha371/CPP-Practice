//File Handling 


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char name[100];
	char salary[50];
	char department[30];
//	char inputFilename[] = "D:\\Projects\\records.txt";
	
	ifstream infile;
	
	infile.open("D:\\Projects\\records.txt");
	
	if(!infile)
	{
		cout<<"Somthing wrong the file can't open"<<endl;
	}
	else
	{
		cout<< "File succesfully open"<< endl;
	}
	
	infile >> name>>salary>>department;
	cout << name <<"\t"<<salary<<"\t"<<department<<endl;
	
	infile.close();
}
