// Q1: Read and print two integers using a while loop and 
// terminate when '|' is entered.
# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
{
	int i = 0;
	int i1 = 0;
	int i2 = 0;
	while (cin >> i1 >> i2)  // The while loop will stop when any non-integer character is entered.
	{
		cout << i1 << '\t' << i2 << '\n';
		++i;
	}
}

