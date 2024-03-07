#include<iostream>
#include<string>
using namespace std;
/*As treacher and students are humans they both have names,ids and many more thing but to think these are common
why don;t we make a class human */

/*If i want to make human class protected like i don't acess it in object i just use it in inheritance 
which is called abstract or virtual then what we do is.. we have to make a function virtual without body or equal to zero*/
class human{
	public:
	string name;
	int id;
	/*Now the teacher and student calss inherit these qualities ecause both have these*/
    virtual void un_seen() = 0;
};
/*if we inherited the humna tracher class will also become avstract so to revent this we have to public unseen function here*/
class teacher : human{
/*So now it have all the attributes which human class have*/
 public:
        void un_seen(){
  	    cout << "i'm inherite from human"<<endl;
  }
};

class students{
	
};

int main()
{

/*Here we acess the teacher attributes wich inheritated by human*/
//    teacher t1;
//    t1.name("Ali");
/*Now after making virtual function If i want to acess the human function then we won't do that 
it will create an error*/
//    human h1;

teacher t1;
t1.un_seen();
    return 0;	
    
}

