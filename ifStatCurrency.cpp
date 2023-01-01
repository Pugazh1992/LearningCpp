// convert from yen, euros or pounds to dollars.
// a suffix ‘y’ or ‘e’ or 'p' indicates the unit of the input
// any other suffix is an error

#include "std_lib_facilities.h"

int main()
{
constexpr double dollars_per_yen = 0.0068; // number of dollars in one yen
constexpr double dollars_per_euro = 1.00; // number of dollars in one euro
constexpr double dollars_per_pound = 1.14; // number of dollars in one pound

double amount = 1; 
char unit = ' '; // a space is not a unit
cout<< "Please enter the amount followed by a unit (y or e or p):\n";
cin >> amount >> unit;
if (unit == 'y')
cout << amount << "yen == " << dollars_per_yen*amount << "dollars\n";
else if (unit == 'e')
cout << amount << "euro == " << dollars_per_euro*amount << "dollars\n";
else if (unit == 'p')
cout << amount << "pound == " << dollars_per_pound*amount << "dollars\n";
else
cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}
