#include<iostream>
using namespace std;

class Box
{
	private:
		int length;
	public:
		friend int printlength(Box);
	
};

int printlength(Box b)
{
	b.length += 10;
	return b.length;
}

int main()
{
	Box b;
	cout << "The length is: "<< printlength(b);
	return 0;
}
