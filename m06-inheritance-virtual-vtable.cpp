// Source: https://www.learncpp.com/cpp-tutorial/the-virtual-table/

#include <iostream>
#include <string_view>

using namespace std;

class Base
{
public:
    string_view getName() const { return "Base"; }                // not virtual
    virtual string_view getNameVirtual() const { return "Base"; } // virtual
};

class Derived: public Base
{
public:
    string_view getName() const { return "Derived"; }
    virtual string_view getNameVirtual() const override { return "Derived"; }
};

int main()
{
    Derived derived {};
    Base& base { derived };

    cout << "base has static type: " << base.getName() << '\n';
    cout << "base has dynamic type: " << base.getNameVirtual() << '\n';

    return 0;
}