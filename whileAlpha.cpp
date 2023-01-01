// calculate and print alphabets and their ascii values:
#include "std_lib_facilities.h"

int main()
{
int i = 0; // start from 0
char alpha = 'a';
while (i<26) {
cout << char(alpha + i) << '\t' << int(char(alpha + i)) << '\n';
++i; // increment i (that is, i becomes i+1)
}
}
