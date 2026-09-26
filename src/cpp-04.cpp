#include<iostream>

using namespace std;

string* fun() {
    string s1;
    string s2("XY");
    // https://en.cppreference.com/cpp/language/nullptr
    // nullptr and NULL are basically the same
    string* s3 = nullptr; 
    string* s4 = nullptr;

    // Point 1
    s3 = new string("AD");
    // to where obj s4 goes when we return?
    s4 = new string("TD");

    // Point 2
    return s3;
}

int main()
{
    cout << "----------------------" << endl;
    cout << "- Dynamic Allocation -" << endl;
    cout << "----------------------" << endl << endl;

    // https://en.cppreference.com/cpp/types/NULL
    string* p = NULL;
    p = fun();

    cout << "p (aka s3): " << *p << "; ";
    cout << "addr: " << p << endl;
    
    delete p;    

    return 0;
}