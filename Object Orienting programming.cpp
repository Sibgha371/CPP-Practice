class stack{
	private:
		int stackstore[100];
		int SP;
	public:
		stack()
		{
			SP = 0;
		}
		void push(int value);
		int pop()
		{
			return stackstore[--SP];
		}
};

void stack::push(int value)
{
	stackstore[SP++] = value;
}
// Adding a new subclass which have the properties of stack class
class Addingstack:stack
{
	private:
		int sum;
	public:
		Addingstack();
		void push(int value);
		int pop();
		int get_sum();
};

Addingstack::Addingstack():stack()
{
	sum = 0;
}
void Addingstack::push(int value)
{
	sum += value;
	stack::push(value);
}
int Addingstack::pop()
{
	int value = stack::pop();
	sum -= value;
	return value;
}
int Addingstack::get_sum()
{
	return sum;
}
#include <iostream>

using namespace std;

int main() 
{
    Addingstack super_stack;
    
    for(int i = 1; i < 10; i++)
        super_stack.push(i);
    cout << super_stack.get_sum() << endl;
    for(int i = 1; i < 10; i++)
        super_stack.pop();
    cout << super_stack.get_sum() << endl;
}

