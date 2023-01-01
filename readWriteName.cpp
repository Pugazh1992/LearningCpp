// read and write a first name
#include "std_lib_facilities.h"
int main()
{
string first_name; // first_name is a variable of type string
string friend_name;
char friend_sex = 0;
int age;

//cout << "Please enter your first name (followed by 'enter'):\n";
cout << "Enter the name of the person you want to write to:";
cin >> first_name; // read characters into first_name
cout << "Enter the person's age:";
cin >> age;
cout << "Enter your friend's name':";
cin >> friend_name; // read characters into first_name
cout << "Enter his/her sex (m - male, f - female):";
cin >> friend_sex;


//cout << "Hello, " << first_name << "!\n";
//if (previous == current)
cout << "Dear " << first_name << ",\n";
cout << "	How are you? I am fine. I miss you. I still have a sexual crush on you!"
	<< "Have you seen " << friend_name << " lately?";
	
if (friend_sex == 'm' )
	cout << " If you see " << friend_name << "  please ask him to call me." ;
if (friend_sex == 'f' )
	cout << " If you see " << friend_name << " please ask her to call me." ;
	
cout << " I hear you just had a birthday and you are " << age << " years old.";
if ( age <= 0 || age >= 110) 
	simple_error("You're kidding!");
	
if ( age < 12)	
	cout << " Next year you will be " << age+1 << "." ;
if ( age == 17)		
	cout << " Next year you will be able to vote.";
if ( age > 70)		
	cout << " I hope you are enjoying retirement.";

cout << "\nYours sincerely, \n\nPugazh";
}
