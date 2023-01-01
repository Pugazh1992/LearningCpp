// This program shows different errors: compile time errors

# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int area(int length, int width)
{
	if (length<=0 || width <=0) error("non-positive area() argument");
	return length*width;
}

int framed_area(int x, int y) // calculate area within frame
{
	constexpr int framewidth = 2;
	if ( (x - framewidth) <=0 || (y - framewidth) <=0 ) // Important: when you copy and paste code from a book,
	// make sure that the compiler does not interpret the minus sign as the hyphens. This usually shows up as: [Error] stray '\226'
	{
		error("\nnon-positive area() argument called by framed_area()");
	}
	return area(x - framewidth, y - framewidth);
}

void f(int x, int y, int z)
{
	int area1 = area(x,y);
	cout << "area 1: " << area1 << '\n';
	int area2 = framed_area(3,z);
	cout << "area 2: " << area2 << '\n';
	int area3 = framed_area(y,z);
	cout << "area 3: " << area3 << '\n';
	double ratio = double(area1)/area3;
	cout << "ratio: " << ratio << '\n';
}

int main()
{
//	int s3 = area(7,8);
//	int s1 = area(7;
//int s2 = area(7)
//Int s3 = area(7);
//int s4 = area('7);
//int x0 = arena(7);
//int x1 = area(7);
//int x2 = area("7,2");
//	cout << s3 << '\n';
//f(4,5,6);
f(1,2,3);
//f('a','b','c');  // Here, I've given characters as inputs, but the compiler converted them to integers using the ASCII equivalency.
//f(-1,2,3);
}
