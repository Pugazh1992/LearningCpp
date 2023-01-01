// A program that prints out disliked words as 'BLEEP'
# include "std_lib_facilities.h"

int main()
{
	vector<string> vs;
	// A for loop for inputing the string.
	for (string temp; cin >> temp;)
	{
		vs.push_back(temp);
	}
	
	// A for loop for outputing the string.
	string disliked1 = "Broccoli";
	string disliked2 = "Papaya";
	string disliked3 = "Cucumber";
	for (int i = 0; i < vs.size(); ++i)
	if ( vs[i] == disliked1 || vs[i] == disliked2 || vs[i] == disliked3 )
	cout << "BLEEP" << '\n';
	else
	cout << vs[i] << '\n';
}

