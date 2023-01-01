// Q7: Add a unit to each double entered; that is, enter values such as 10cm,
//2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion
//factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit
//indicator into a string. You may consider 12 m (with a space between the
//number and the unit) equivalent to 12m (without a space).

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
		i1.push_back(temp1);
		unit.push_back(temp2);
		cout << "The given vector is" << '\n';
		for (int i = 0; i < i1.size(); ++i)
		{
			cout << i1[i] << '\t' << unit[i] << '\n';
		}
	}
}
