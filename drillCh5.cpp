// This program deliberately inserts errors for manual repairing

#include "std_lib_facilities.h"

int main()
try {
	
	// 1)
//	Cout << "Success!\n";  //Error
//	cout << "Success!\n";  //Correction
	
	//2)
//	cout << "Success!\n;  //Error
//	cout << "Success!\n";  //Correction
	
	//3)
//	cout << "Success" << !\n" //Error
//	cout << "Success" << "!\n"; //Correction
	
	//4)
//	cout << success << '\n';  //Error
//	cout << "success" << '\n';  //Correction
	
	//5) Error segment:
//	string res = 7;
//	vector<int> v(10);
//	v[5] = res;
//	cout << "Success!\n";
	
	//Correct segment:
//	string res = "7";
//	vector<int> v(10);
//	v[5] = stoi(res);   // stoi() converts string to an integer
//	cout << "Success!\n";

	//6) Error segment:
//	vector<int> v(10);
//	v(5) = 7;
//	if (v(5)!=7) cout << "Success!\n";
	
	//Correct segment:
//	vector<int> v(10);
//	v[5] = 7;
//	if (v[5]==7) cout << "Success!\n";

	//7) Error segment:
//	if (cond) 
//		cout << "Success!\n";
//	else
//	  cout << "Fail!\n";
	  
	//Correct segment:
//	int a = 7;
//	if (a == 7) 
//		cout << "Success!\n";
//	else
//	  cout << "Fail!\n";

	//8) Error segment:
//	bool c = false;
//	 if (c) cout << "Success!\n";
//	  else cout << "Fail!\n";
	  
	//Correct segment:
//	bool c = true;
//	 if (c) cout << "Success!\n";
//	  else cout << "Fail!\n";
	  
	//9) Error segment:
//	string s = "ape";
//	 boo c = "fool"<s;
//	  if (c) cout << "Success!\n";
	  
	//Correct segment:
//	string s = "ape";
//	bool c = "fool" > s;  // string comparison
//	  if (c) cout << "Success!\n";
	  
	//10) Error segment:
//	string s = "ape";
//	 if (s=="fool") 
//	 cout << "Success!\n";
	 
	 //Correct segment:
//	string s = "ape";
//	 if (s=="ape") 
//	 cout << "Success!\n";

	//11) Error segment:
//	string s = "ape";
//	 if (s=="fool")
//	  cout < "Success!\n";
	  
	//Correct segment:
//	string s = "ape";
//	 if (s=="ape")
//	  cout << "Success!\n";
	  
	//12) Error segment:
//	string s = "ape";
//	 if (s+"fool")
//	  cout < "Success!\n";
	  
	//Correct segment:
//	string s = "ape";
//	if (s!="fool")
//	  cout << "Success!\n";  
	  
	//13) Error segment:
//	vector<char> v(5);
//	for (int i=0; 0<v.size(); ++i) ;
//	 cout << "Success!\n";
	 
	//Correct segment:
//	vector<char> v(5);
//	for (int i=0; i<1; ++i) 
//	 cout << "Success!\n";
	 
	//14)Correct segment:
//	vector<char> v(5);
//	for (int i=0; i<=v.size(); ++i) ; // The semi-colon terminates the for loop so that "Success" is printed only once.
//	 cout << "Success!\n";
	 
	//15) Error segment:
//	string s = "Success!\n";
//	 for (int i=0; i<6; ++i)
//	  cout << s[i];
	  
	//Correct segment:
//	string s = "Success!\n";
//	 for (int i=0; i<s.size(); ++i) 
//	  cout << s[i];
	  
	//16) Error segment:
//	if (true) then cout << "Success!\n";
//	 else cout << "Fail!\n";
	 
	//Correct segment:
//	if (true) cout << "Success!\n";
//	 else cout << "Fail!\n";
	 
	//17) Error segment:
//	int x = 2000;
//	char c = x;
//	 if (c==2000) cout << "Success!\n";
	 
	//Correct segment:
//	int x = 2000;
//	char c = x;
//	 if (c!=2000) cout << "Success!\n";
	 
	//18) Error segment:
//	string s = "Success!\n";
//	for (int i=0; i<10; ++i) 
//		cout << s[i];
		
	//Correct segment:
//	string s = "Success!\n";
//	for (int i=0; i<s.size(); ++i) 
//		cout << s[i];

	//19) Error segment:
//	vector v(5);
//	 for (int i=0; i<=v.size(); ++i) ;
//	  cout << "Success!\n";
	  
	//Correct segment:
//	vector<char> v(5);
//	 for (int i=0; i<=v.size(); ++i) ;
//	  cout << "Success!\n";
	  
	//20) Error segment:
//	int i=0;
//	int j = 9;
//	while (i<10) ++j;
//	 if (j<i) cout << "Success!\n";
	 
	//Correct segment:
//	int i=0;
//	int j = 9;
//	while (i<10){
//	 if (j<=i) cout << "Success!\n";
//	 ++i;
//	}
	
	//21) Error segment:
//	int x = 2;
//	double d = 5/(x-2);   // When a line gives infinity as output, the program may return a very large value
//	cout << d;
//	 if (d==2*x+0.5)
//	  cout << "Success!\n";
	  
	//Correct segment:
//	int x = 2;
//	double d = 5/(x-2.5);   
//	 if (d==-10)
//	  cout << "Success!\n";
	  
	//22) Error segment:
//	string<char> s = "Success!\n";
//	 for (int i=0; i<=10; ++i)
//	  cout << s[i];
	  
	//Correct segment:
//	string s = "Success!\n";
//	 for (int i=0; i<s.size(); ++i)
//	  cout << s[i];	
	  
	//23) Error segment:
//	int i=0;
//	 while (i<10) ++j;
//	  if (j<i) cout << "Success!\n";
	  
	//Correct segment:
//	int i=0;
//	int j=9;
//	 while (i<10) {
//	  if (j<=i) cout << "Success!\n";
//	  ++i;
//	  }
	  
	//24) Error segment:
//	int x = 4;
//	double d = 5/(x-2); 
//	 if (d=2*x+0.5) cout << "Success!\n";
	 
	 //Correct segment:
//	int x = 4;
//	double d = 5.0/(x-2); 
//	 if (d == 2.5) cout << "Success!\n";

	//25)
//	cin << "Success!\n";   //Error
	cout << "Success!\n";   //Error
	
		
	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
