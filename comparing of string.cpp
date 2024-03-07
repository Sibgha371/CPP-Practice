////Comparing two string
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() 
//{
//  string str1, str2;
//
//  cout << "Enter 2 lines of text:" << endl;
//  getline(cin, str1);
//  getline(cin, str2);
//  cout << "You've entered:'" << endl;
//  if (str1.compare(str2) == 0)
//    cout << "\"" << str1 << "\" == \"" << str2 << "\"" << endl;
//  else if (str1.compare(str2) > 0)
//    cout << "\"" << str1 << "\" > \"" << str2 << "\"" << endl;
//  else
//    cout << "\"" << str2 << "\" < \"" << str1 << "\"" << endl;
//}
#include <iostream>
#include <string>

using namespace std;

void print_info(string& s) 
{
  cout << "content =\"" << s << "\" ";
  cout << "capacity = " << s.capacity() << endl;
  cout << "is empty? " << (s.empty() ? "yes" : "no") << endl;
  cout << "---------" << endl;
}

int main() 
{
  string the_string = "content";

  print_info(the_string);
  the_string.resize(50, '?');
  print_info(the_string);
  the_string.resize(4);
  print_info(the_string);
  the_string.clear();
  print_info(the_string);
}
