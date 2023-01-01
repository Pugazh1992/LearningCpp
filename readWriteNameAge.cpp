// read name and age (2nd version)
#include "std_lib_facilities.h"
int main()
{
cout << "Please enter your first name and age\n";
string first_name = "???"; // string variable ("???” means “don’t know the name”)
double age = 0.0;
//int age = –1; // integer variable (–1 means “don’t know the age”)
cin >> first_name >> age; // read a string followed by an integer
cout << "Hello, " << first_name << " (age " << age*12 << " months)\n";

cout << "Please enter your first and second names\n";
string first;
string second;
cin >> first >> second; // read two strings
cout << "Hello, " << first <<" " << second << '\n';
return 0;
}
