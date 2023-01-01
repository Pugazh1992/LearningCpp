// Q6: Now change the body of the loop so that it reads just one double each
//time around. Define two variables to keep track of which is the smallest
//and which is the largest value you have seen so far. Each time through
//the loop write out the value entered. If it’s the smallest so far, write the
//smallest so far after the number. If it is the largest so far, write the largest
//so far after the number.

# include "F:\edu-soft\C++_tutorials\Books\Practice\std_lib_facilities.h"

int main()
{
	double minNum;
	double maxNum;
	vector<double> i1; 
	for (double temp; cin>>temp; ) 
	{
		i1.push_back(temp);
		cout << "The given vector is" << '\n';
		for (int i = 0; i < i1.size(); ++i)
		{
			cout << i1[i] << '\t';
		}
		cout << '\n' ;
		minNum = *min_element(i1.begin(), i1.end());
		maxNum = *max_element(i1.begin(), i1.end());
		if( temp == minNum)
		{
			cout << "The smallest so far: " << minNum << '\n';
		}
		if( temp == maxNum)
		{
			cout << "The largest so far: " << maxNum << '\n';
		}		
	}
}

