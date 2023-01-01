// calculate and print alphabets and their ascii values using for loop:
#include "std_lib_facilities.h"

int main()
{
char alpha1 = '0';  // A starting point to print all the digits.
char alpha2 = 'A'; // A starting point to print all the uppercase letters.
char alpha3 = 'a';  // A starting point to print all the lowercase letters.
int i, j, k;
for (i = 0 ; i<10; ++i)
{
cout << char(alpha1 + i) << '\t' << int(char(alpha1 + i)) << '\n';
}

for ( j = 0 ; j<26; ++j)
{
cout << char(alpha2 + j) << '\t' << int(char(alpha2 + j)) << '\n';
}

for ( k = 0 ;  k<26;  ++k)
{
cout << char(alpha3 + k) << '\t' << int(char(alpha3 + k)) << '\n';
}

}
