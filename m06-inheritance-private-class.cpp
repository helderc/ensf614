#include <iostream>

using namespace std;

class A {
    public:
        void pub()  { cout << "A pub" << endl; }
    protected:
        void prot() { cout << "A prot" << endl; }
    private:
        void priv() { cout << "A priv" << endl; }
};


// Case 3: private inheritance
class BPrivate : private A {
    public:
        void test() {
            pub();   // OK - accessible inside the class
            prot();  // OK
        }
};


class Derived : public BPrivate {
    public:
        void test() {
            // ERROR - pub() is private in BPrivate, not inherited further
            //pub();  
        }
};


int main() {
    BPrivate b;
    // b.pub(); // ERROR - private, not accessible from outside
    b.test();

    Derived d;
    d.test();
}