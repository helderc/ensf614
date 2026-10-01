#include <iostream>

using namespace std;

// 'class' or 'typename' is accepted below
template<class T>
class Vector {
    private:
        int size;
        T* data;
    public:
        // new T[s] : default-initialization where built-in types are left uninitialized (garbage)
        // new T[s]() : value-initialization: built-in types are set to zero
        Vector(int s) : size(s), data(new T[s]()) {}
        ~Vector() { 
            delete[] data; 
        }

        // to allow us to set values
        T& operator[](int i) { 
            // /!\ no bounds checking!!!
            return data[i]; 
        }

        T getValue(int pos) {
            return data[pos];
        }

        void display() {
            for (int i = 0; i < size; i++)
                cout << data[i] << ' ';
            cout << '\n';
        }
};

int main() {
    Vector<int> a(3);
    a[1] = 5;
    // /!\ no bounds checking!!!
    a[30] = 10;
    // 0 5 10
    a.display();       
    cout << a.getValue(30) << endl << endl;   

    Vector<double> b(2);
    b[0] = 3.14;
    b[1] = 8;
    // 3.14 8
    b.display(); 

    Vector<string> c(2);
    c[0] = "hello";
    c[1] = "bye";
    c.display();
}