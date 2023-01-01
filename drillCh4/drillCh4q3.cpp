// Q3: Read and print the smaller and larger value of two integers using a while loop.
// Check if both the numbers are equal and terminate when '|' is entered.
# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
{
	int i = 0;
	int i1 = 0;
	int i2 = 0;
	while (cin >> i1 >> i2)  // The while loop will stop when any non-integer character is entered.
	{
		if(i1 == i2)
		 {
			cout << "the numbers are equal" << '\n';
		}
		else 
		{
		cout << "the smaller value is " << min(i1, i2) << '\n';
		cout << "the larger value is " << max(i1, i2) << '\n';
		++i;
		}
	}
}

