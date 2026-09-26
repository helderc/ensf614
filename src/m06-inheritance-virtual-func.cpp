#include <iostream> 

using namespace std; 

// ABSTRACT CLASS 
class Animal {
    public: 
        // move is a pure virtual 
        virtual void move() = 0; 
        virtual void display() {
            cout << "Animal" << endl; 
        }
        void fun() {
            cout << "Animal: Fun!" << endl;    
        } 
    // more functions 
};

class Fish : public Animal {
    public: 
        // the 'override' keyword is optional

        // without this definition, the base class will be called
        void display() override {
            cout << "Fish" << endl; 
        }
        void move() override {
            cout << "Swimming" << endl; 
        }
};


int main() {
    // can't be instantiated because of the 'pure virtual' method
    // Animal a = Animal();

    Fish f;
    f.display();
    f.move();

    return 0;
}