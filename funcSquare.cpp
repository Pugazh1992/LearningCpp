// Compute the square of a positive integer by not using the multiplication operator
# include "std_lib_facilities.h"

int square2(int n)
{
	int sum {0};
	for (int i = 0; i<n; ++i)
	{
		sum = sum + n;
	}
	return sum;
}

void print_square(int v)
{
cout << v << '\t' << square2(v) << '\n';
}

int main()
{
// for (int i = 0; i<100; ++i) print_square(i);
for (int i = 0; i<110; ++i) print_square(i);
}
