#include<iostream>

using namespace std;

string fun (string x, string& y, string* z)
{ 
    string w;
	// Some code...
	return w;
}

int main(void) {
	string s1("ABC");
	string s2("XY");
	
	{
		string s3("KLM"); 
		
		string *s4;
		s4 = new string("BAR");
		
		string s5 = s1; 
		s3 = s2;
		string s6[2]; 
		
		delete s4;
		// Point #1
	}
	
	// Point #2
	string s7 = fun(s1, s2, &s1);
	s2 = fun(s1, s2, &s7);

    cout << "done!" << endl;
	
	// Point #3
	return 0;
}