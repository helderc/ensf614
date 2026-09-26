#include<iostream>

using namespace std;

int main()
{
    cout << "---------------------------" << endl;
    cout << "- Pointers and References -" << endl;
    cout << "---------------------------" << endl;

    int a , b;
    // ptr is a pointer to a
    int* ptr = &a;
    // ref is a reference/alias to b
    int& ref = b;
    // a reference to a pointer
    int* & refptr = ptr;

    a = 5;
    b = 2;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl << endl;

    // setting the new value to 'a' via its pointer
    *ptr = 4;
    cout << "'a' changed via *ptr: " << a << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&a: " << &a << endl << endl;

    // ref is an alias to b
    ref = 8;
    cout << "ref: " << ref << endl;
    cout << "'b' changed via 'ref': " << b << endl << endl;
    
    // refptr is a reference to a pointer (ptr) that points to a
    *refptr = 23;
    cout << "refptr: " << refptr << endl;
    cout << "&refptr: " << &refptr << endl;
    cout << "*refptr: " << *refptr << endl;
    cout << "a: " << a << endl;

    return 0;
}