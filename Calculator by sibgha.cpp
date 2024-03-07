#include<iostream>
using namespace std;


float addition(float a,float b)
{
    return a + b;
}

float subtraction(float a,float b)
{
    return a + b;
}

float Multiplication(float a,float b)
{
    return a + b;
}

float Division(float a,float b)
{
    return a + b;
}

int main()
{
    //Name of calculator
    cout << "*** Welcome to our calculator program ***" << endl;

    // variables names
    float n1,n2, answer;

    while(true)
    {
        cout << "Enter the value for number 1" << endl;
        cin >> n1;
        cout << "Enter the value for nuber 2" << endl;
        cin >> n2;

        cout << "Press A for addition, press S for suntraction, press M for Multiplication, press D for Division" << endl;

        char input;
        cin >> input;
        
        switch (input)
        {
        case 'A' :
            answer =  addition(n1,n2);
            cout<< "The addition of "<< n1 << "and " << n2 <<"is"<< answer<<endl;
            break;

        case 'S' :
            answer =  subtraction(n1,n2);
            cout<< "The subtraction of "<< n1 << "and " << n2 <<"is"<< answer<<endl;
            break;

        case 'M' :
            answer =  Multiplication(n1,n2);
            cout<< "The Multiplication of "<< n1 << "and " << n2 <<"is"<< answer<<endl;
            break;

        case 'D' :
            answer =  Division(n1,n2);
            cout<< "The Division of "<< n1 << "and " << n2 <<"is"<< answer<<endl;
            break;

        default:
            break;
        }

        cout << "Press any key if you want to continue. . . .Press Q to quit" <<endl;
        cin >> input;
        if(input == 'Q') break;
    }




    return 0;
}