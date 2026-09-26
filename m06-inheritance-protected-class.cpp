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

// Case 2: protected inheritance 
class BProtected : protected A {
    public:
        BProtected() {
            cout << "BProtected: constructor" << endl;
            pub();  
            prot();
        }
};

int main() {
    BProtected b;
    // ERROR - pub() became protected in BProtected
    // b.pub(); 
}