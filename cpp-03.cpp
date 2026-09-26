#include<iostream>

using namespace std;

class A {
    // by default class' members are private
    int i;
    public:
        int getI() {
            return i;
        }
        void setI(int v) {
            this->i = v;
            // or i = v; works
        }
};

int main()
{
    cout << "-----------" << endl;
    cout << "- Classes -" << endl;
    cout << "-----------" << endl << endl;

    // a1 is defined on STACK (it belongs to the scope)
    A a1;
    
    // invalid if i is private
    // a.i = 0;
    a1.setI(23);

    cout << "a1.getI(): " << a1.getI() << endl;

    // a2 is defined on HEAP
    A* a2 = new A();
    a2->setI(55);

    cout << "a2->getI(): " << a2->getI() << endl;
    

    return 0;
}