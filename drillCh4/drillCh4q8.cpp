// Q8: Reject values without units or with “illegal” representations of units, such
//as y, yard, meter, km, and gallons

# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
{
	constexpr double m_to_cm = 100.0; // number of dollars in one yen
	constexpr double in_to_cm = 2.54; // number of dollars in one euro
	constexpr double ft_to_in = 12.0; // number of dollars in one pound
	
	vector<double> i1;
	vector<string> unit;
	double temp1;
	string temp2;
	for ( int j = 0; cin >> temp1 >> temp2; ++j ) // Note: This for loop runs until 'Ctrl+D' is pressed.
	{
		if(temp2 == "m" || temp2 == "in" || temp2 == "ft" || temp2 == "cm" )
		{
			i1.push_back(temp1);
			unit.push_back(temp2);
			cout << "The given vector is" << '\n';
			for (int i = 0; i < i1.size(); ++i)
			{
				cout << i1[i] << '\t' << unit[i] << '\n';
			}
		}
		else
			cout << "Error: Unacceptable unit. Please use 'm' or 'in' or 'ft' or 'cm'\n";

	}
}
