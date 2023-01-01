// This program demonstrates the use of error exceptions.

# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

class Bad_area { }; // a type specifically for reporting errors from area()

// calculate area of a rectangle;
// throw a Bad_area exception in case of a bad argument
int area(int length, int width)
{
if (length<=0 || width<=0) throw Bad_area{};  // Error in area computation is detected here.
return length*width;
}

int framed_area(int x, int y) // calculate area within frame
{
	constexpr int framewidth = 2;
	return area(x - framewidth, y - framewidth);
}

void f(int x, int y, int z)
{

}

int main()
try{
	
	int x = -1;
	int y = 2;
	int z = 4;	
	
	int area1 = area(x,y);
	cout << "area 1: " << area1 << '\n';
	int area2 = framed_area(1,z);
	cout << "area 2: " << area2 << '\n';
	int area3 = framed_area(y,z);
	cout << "area 3: " << area3 << '\n';
	double ratio = double(area1)/area3;
	cout << "ratio: " << ratio << '\n';
}
catch (Bad_area) {
cout << "Oops! bad arguments to area()\n";   // The detected error is handled here.
}
