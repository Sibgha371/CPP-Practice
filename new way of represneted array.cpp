//Here we learn the new style to initialize the array
#include<iostream>

//While using a vector array we will use this library
#include<vector>

using namespace std;
int main()
{
	/*initializing the simple array of type vector....here we have to write the vector and the type of array in 
	<> this brackets then the array name and the size*/
//	vector<int> array(5);


	//In a two dimenstional we will initialize the array as follow:
	/*Here the 3 is rows and 4 is columns*/
//    vector<vector<int>> array(3,vector<int>(4))
   
   //In a three dimenstional we will initialize the array as follow:
//	vector<vector<vector<int>>> guests(3, vector<vector<int>>(15, vector<int>(20)));

	//Now we can book a room for two newlyweds: in the second building, on the tenth floor, room fourteen:
//    guests[1][9][13] = 2;

    // and release the second room on the fifth floor located in the first building:
//    guests[0][4][1] = 0;

    // here we use a method of vector 
//    int size = 7,size_of_vector;
//    vector<int> student(size);
//    size_of_vector = student.size();
//    cout << size_of_vector;

   // a way to hold a number of arrays in one is called structure...here we use a capitall struct variable so hat
   //it cannot mix with the ordinary ones
    struct Student 
    {
        string name;
        float time_spent;
        int recent_chapter;
    };
  /*As the C++ language offers a specialized indexing operator [] for arrays, it also gives us a so-called selection
   operator designed for structures and is denoted as a single character . (dot).....This is a binary operator. Its 
   left argument must identify the structure while the right argument must be the name of the field known in this
    structure.*/
   //Consequently, you can use both of these selectors:

    Student.time_spent = 1.5;

    //and

    float t = Student.time_spent;
    cout << t;
    

}

