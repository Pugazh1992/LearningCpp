// Q4 and Q5: Read and print the smaller and larger value of two floating point numbers using a while loop.
// Check if both the numbers are equal and terminate when '|' is entered.
# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
{
	int i = 0;
	double i1 = 0;
	double i2 = 0;
	while (cin >> i1 >> i2)  // The while loop will stop when any non-integer character is entered.
	{
		if(i1 == i2)
		 {
			cout << "the numbers are equal" << '\n';
		}
		else if (abs(i1 - i2) < 0.01)
		{
			cout << "the smaller value is " << min(i1, i2) << '\n';
			cout << "the larger value is " << max(i1, i2) << '\n';
			cout << "he numbers are almost equal" ;
		}
		else 
		{
			cout << "the smaller value is " << min(i1, i2) << '\n';
			cout << "the larger value is " << max(i1, i2) << '\n';
		}
		++i;
	}
}

