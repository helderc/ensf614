#include<iostream>

using namespace std;

template <class T> class Array;
template<class T> class ArrayIterator; 

template <class T>
class Array {
    friend class ArrayIterator<T>; 
    T *storage;
    int size;

    public:
        Array(int s): size(s) {
            storage = new T[size];
            //...
        }

        T& operator [] (int i) {
            return storage[i];
        }
};

template<class T>
class ArrayIterator 
{
    Array<T>* ptr;
    int index;

    public:
        ArrayIterator(Array<T>& ar):ptr(&ar), index(0){}
        T operator++() { 
            index++;     
            // /!\ need to check the bounds!       
            if (index >= ptr->size)
                index = 0;            
            return ptr->storage[index];
        }
        T operator--() { 
            index--;
            // /!\ need to check the bounds!
            if (index <= ptr->size)
                index = 0;
            return ptr->storage[index]; 
        }
};

int main()
{
    Array <int> x(3);
    x[0] = 100;
    x[1] = 200;
    x[2] = 110;
    
    ArrayIterator<int> itr(x); 
    cout << x[0] << endl; 
    cout << "++itr: " << ++itr << endl; 
    cout << "--itr: " << --itr << endl; 
    cout << "--itr: " << --itr << endl; 
    
    // our iterator doesn't have the methods implemented
    // for (itr = x.begin(); ...

    return 0;
}

