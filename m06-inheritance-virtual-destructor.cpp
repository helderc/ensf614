#include<iostream>

using namespace std;

class A {
    char* s1; 

    public: 
        A(int n) {
            s1 = new char[n];
            cout << "s1: " << &s1 << endl;
        }

        // add 'virtual' and check what happens with the execution order
        ~A() {
            cout << "~A called" << endl;
            delete [] s1;
        }
};

class B: public A {
    char* s2; 
    
    public: 
        B(int n, int m): A(n) {
            s2 = new char[m];
            cout << "s2: " << &s2 << endl;
        } 

        // without OUR ~B(), the default one will be called.
        //      - the default ~B() knows about everything on the Stack but 
        //          knows nothing about memory allocated on the Heap
        ~B() {
            cout << "~B called" << endl;
            delete [] s2;
        }
};

int main(void) 
{
    // Polymorphism here
    A* p = new B(5, 6); 
    delete p; 

    return 0;
} 
