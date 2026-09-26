#include <iostream>
#include <string>

#include <chrono>
#include <thread>

#include "add.h"

using namespace std;

int main() {
    int var = 10;
    string s = "string test";

    // declare pointer and store address of var
    int* ptr = &var;

    // print value and address
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    cout << chrono::system_clock::now() << endl;
    this_thread::sleep_for(chrono::seconds(5));
    cout << chrono::system_clock::now() << endl;

    cout << s << endl;
    cout << "sum (int): " << test::add(3,7) << endl;

    float x = 3.1;
    float y = 7.0;
    cout << "sum (float): " << test::add(x, y) << endl;

    cout << "sum (string): " << test::add("string 1", "string 2") << endl;

    return 0;
}