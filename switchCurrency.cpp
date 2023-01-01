// convert from yen, euros or pounds to dollars.
// a suffix ‘y’ or ‘e’ or 'p' or 'Y' or 'k' indicates the unit of the input
// any other suffix is an error

#include "std_lib_facilities.h"

int main()
{
constexpr double dollars_per_yen = 0.0068; // number of dollars in one yen
constexpr double dollars_per_euro = 1.00; // number of dollars in one euro
constexpr double dollars_per_pound = 1.14; // number of dollars in one pound
constexpr double dollars_per_yuan = 0.14; // number of dollars in one yuan
constexpr double dollars_per_kroner = 0.098; // number of dollars in one kroner

double amount = 1; 
char unit = ' '; // a space is not a unit
cout<< "Please enter the amount followed by a unit (y or e or p or Y or k):\n";
cin >> amount >> unit;

switch (unit) {
case 'y':
cout << amount << "yen == " << dollars_per_yen*amount << "dollars\n";
break;
case 'e':
cout << amount << "euro == " << dollars_per_euro*amount << "dollars\n";
break;
case 'p':
cout << amount << "pound == " << dollars_per_pound*amount << "dollars\n";
break;
case 'Y':
cout << amount << "yuan == " << dollars_per_yuan*amount << "dollars\n";
break;
case 'k':
cout << amount << "kroner == " << dollars_per_kroner*amount << "dollars\n";
break;
default:
cout << "Sorry, I don't know a unit called '" << unit << "'\n";
break;
}


}
