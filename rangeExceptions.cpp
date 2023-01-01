// This program demonstrates the use of range exceptions

# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
try {
	vector<int> v; // a vector of ints
	for (int x; cin>>x; )
		v.push_back(x); // set values
	for (int i = 0; i<v.size(); ++i) // print values
		cout << "v[" << i <<"] == " << v[i] << '\n';
//	double denom = 2.0;
	double denom = 0.0;
	double ratio = v[0]/denom;
	cout << "ratio: " << ratio << '\n';
}
 catch (out_of_range) {
	cerr << "Oops! Range error\n";
	return 1;
}
 catch (...) { // catch all other exceptions
	cerr << "Exception: something went wrong\n";
	return 2;
}
