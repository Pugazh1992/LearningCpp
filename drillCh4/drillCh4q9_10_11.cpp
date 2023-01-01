// Q9: Keep track of the sum of values entered (as well as the smallest and the
//largest) and the number of values entered. When the loop ends, print the
//smallest, the largest, the number of values, and the sum of values. Note
//that to keep the sum, you have to decide on a unit to use for that sum; use
//meters.

# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
{
	constexpr double m_to_cm = 100.0; // number of dollars in one yen
	constexpr double in_to_cm = 2.54; // number of dollars in one euro
	constexpr double ft_to_in = 12.0; // number of dollars in one pound
	
	vector<double> i1;
	vector<string> unit;
	vector<double> distMeters;
	double minVal;
	double maxVal;
	double sum;
	double temp1;
	string temp2;
	for ( int j = 0; cin >> temp1 >> temp2; ++j ) // Note: This for loop runs until 'Ctrl+D' is pressed.
	{
		if(temp2 == "m" || temp2 == "in" || temp2 == "ft" || temp2 == "cm" )
		{
			i1.push_back(temp1);
			unit.push_back(temp2);
			if( temp2 == "cm" )
			distMeters.push_back(temp1/m_to_cm);
			else if( temp2 == "in" )
			distMeters.push_back((temp1*in_to_cm)/m_to_cm);
			else if( temp2 == "ft" )
			distMeters.push_back((temp1*ft_to_in*in_to_cm)/m_to_cm);
			else
			distMeters.push_back(temp1);

		}
		else
			cout << "Error: Unacceptable unit. Please use 'm' or 'in' or 'ft' or 'cm'\n";

	}
	sort(distMeters);
	minVal = *min_element(distMeters.begin(), distMeters.end());
	maxVal = *max_element(distMeters.begin(), distMeters.end());
	sum = accumulate(distMeters.begin(), distMeters.end(), 0);
	cout << "The set of values converted to meters is:\n";
	for ( int i = 0; i < distMeters.size(); ++i)
	{
		cout << distMeters[i] << '\t';
	}
	cout << "\nThe smallest value is " << minVal << '\n';
	cout << "The largest value is " << maxVal << '\n';
	cout << "Number of values: " << distMeters.size() << '\n';
	cout << "The total value is " << sum << '\n';
	
}
