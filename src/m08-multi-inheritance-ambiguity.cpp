#include<iostream>

using namespace std;

class A {
    public:
        int a;

        A() {
            cout << "Constructor A" << endl;
        }
};

// B: virtual public A --> otherwise 'ambiguity'
class B: virtual public A {
// class B {
    private:
        int b;
    public:
        B() {
            cout << "Constructor B" << endl;
        }
};

// D: virtual public A --> otherwise 'ambiguity'
class D: public B, virtual public A {
    private:
        int d;
    public:
        D() {
            cout << "Constructor D" << endl;
        }
};


int main()
{
    // warning: direct base 'A' inaccessible in 'D' due to ambiguity 
    D d;
    // check how many times the constructor of A is called
    d.a = 5;

    return 0;
}
