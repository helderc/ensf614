#include <iostream>

using namespace std;

int main () 
{
    int n1 = 2;
    int n2 = 5;

    // reference (alias) to n2
    int& ref = n2;
    // pointer to n1
    int* ptr = &n1;

    cout << "Value of 'n1': " << n1 << endl;
    cout << "Pointer to 'n1': " << ptr << endl;
    cout << "Value of 'n1' via ptr: " << *ptr << endl << endl;

    int* & refptr = ptr;
    cout << "int* & refptr: " << *refptr;
    return 0;
}