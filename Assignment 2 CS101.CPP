#include<iostream>
using namespace std;

int main() 
{
    string vuid;
    int cs_marks, math_marks, pakstudy_marks, mgt_marks;
    
    cout << "Enter VUID: ";
    cin >> vuid;
    
    cout << "Enter marks for CS: ";
    cin >> cs_marks;
    
    cout << "Enter marks for Math: ";
    cin >> math_marks;
    
    cout << "Enter marks for Pak Study: ";
    cin >> pakstudy_marks;
    
    cout << "Enter marks for MGT: ";
    cin >> mgt_marks;
    
    int total_marks = cs_marks + math_marks + pakstudy_marks + mgt_marks;
    double average_marks = total_marks / 4.0;
    
    cout << endl << "----- Student Result -----" << endl;
    cout << "VUID: " << vuid << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Average Marks: " << average_marks << endl;
    
    cout << "Final Grade: ";
    if (average_marks >= 91 && average_marks <= 100) {
        cout << "A+" << endl;
    } else if (average_marks >= 81 && average_marks < 91) {
        cout << "A" << endl;
    } else if (average_marks >= 71 && average_marks < 81) {
        cout << "B+" << endl;
    } else if (average_marks >= 61 && average_marks < 71) {
        cout << "B" << endl;
    } else if (average_marks >= 51 && average_marks < 61) {
        cout << "C" << endl;
    } else if (average_marks >= 41 && average_marks < 51) {
        cout << "D" << endl;
    } else if (average_marks >= 35 && average_marks < 41) {
        cout << "E" << endl;
    } else {
        cout << "Fail" << endl;
    }
    
    return 0;
}