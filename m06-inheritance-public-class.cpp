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

// Case 1: public inheritance (most common case)
class BPublic : public A {
    public:
        void test() {
            pub();   // OK - still public
            prot();  // OK - still protected
        }
};


int main() {
    BPublic b;

    // OK - pub() is still public in BPublic
    b.pub();   

    // ERROR - protected, not accessible from outside
    //b.prot(); 
}