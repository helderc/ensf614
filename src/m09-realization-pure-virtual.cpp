#include<iostream>

using namespace std;

// Equivalent to a Java interface 
class Resizable {
    public: 
        virtual void enlarge(int multiplier) = 0;
        virtual void shrink(int divisor) = 0;
        // make the destructor virtual, but let the compiler generate its body
        // as if I'd written virtual ~Animal() {}
        // i.e., it destroys the object normally (running the destructors 
        // of all members and base classes in reverse order), 
        // it just does it through the virtual mechanism.
        virtual ~Resizable() = default; 
};

// Shape implements Resizable 
class Shape : public Resizable { 
    public: 
        void enlarge (int multiplier) override { 
            cout << "enlarge: " << multiplier << endl;
         } 
        void shrink(int divisor) override { 
            cout << "shrink: " << divisor << endl;
         } 
}; 

// Derived classes 
class Rectangle : public Shape { 
    private:
        int width;
        int height;
 };

class Circle : public Shape {  }; 

class Text : public Shape {  };

int main() { 
    Resizable* rec = new Rectangle(); 
    Resizable* txt = new Text(); 
    Resizable* cir = new Circle(); 

    rec->enlarge(3); 
    txt->shrink(2); 
    cir->enlarge(10); 

    return 0; 
}
