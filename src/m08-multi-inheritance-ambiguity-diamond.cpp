#include<iostream>

using namespace std;

class A {
    private:
        int a;
    public:
        A() {
            cout << "Constructor A" << endl;
        }
        void testA() {
            cout << "TestA called" << endl;
        }
};

// B: virtual public A
class B: virtual public A {
// class B {
    private:
        int b;
    public:
        B() {
            cout << "Constructor B" << endl;
        }
};

// C: virtual public A --> otherwise 'ambiguity'
class C: virtual public A {
    private:
        int c;
    public:
        C() {
            cout << "Constructor C" << endl;
        }
};

// both B and A must be virtual
class D: public B, public C {
    private:
        int d;
    public:
        D() {
            cout << "Constructor D" << endl;
        }
};


int main()
{
    D d;
    // test A is ambiguous
    d.testA();

    return 0;
}
