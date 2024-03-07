#include<iostream>
#include<string>
using namespace std;

class teacher{
	private:
	void teach()
	{
		
	}
	public:
	string name;
	int id;
	int show(string n){
/*here the sign (This ->) indicates that the name variable is from the same class*/
		this-> name = n;
		
		cout<<name;
	}
/*AS we see we have two functions with same names so if i input the string the first function will call and..
if i input in int this function is call so this called polymorphism */
	void show(int idn){
		this->id = idn;
		cout<< id;
	}
/*if we want to call the object directly then a special function is used named constructor
we won't need any data type and the name goes with the class..it has to public*/
   teacher(string n)
   {
   	    this->name = n;
   	    cout<<name<<endl;
   }
   
/*The default or without parameter */
   teacher(){
   	    cout<<"The default value will be goes here"<<endl;
   }
/* here another thing called distructor..it starts with (~)and with the name of class...it's used to 
remove the allocated space by class..and it always run in the last..it always have no parameter...
we don't even need to call it */
   ~ teacher(){
   	    cout<<"End";
   }
};

int main()
{
/*First here i declered the object...
Here there is a reason ehy we have this line because we can't simply call the class instead 
we have to make object to acess the members of class*/
//	teacher h1;

/*Then i will choose here which attribute i will use*/
//    h1.show("Ali");
//    h1.show(3267);

    /*Same here goes*/
//    teacher h2;
//    h2.show("Muzammil");
//    h2.show(4577);

/*So the constructor is called by this*/
//    teacher h1("Ali");
/*or if i have the constructor without the parameter than after callig object it will default*/
    teacher h1;


    return 0;	
}

