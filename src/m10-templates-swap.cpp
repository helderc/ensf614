#include<iostream>

using namespace std;

// function prototype: needed if the actual code is elsewhere
// template <class T> 
// void swap (T* a, T* b); 

template <class T> 
void swap (T* a, T* b) 
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

struct Person { 
    int age; 
    char name[30];
};

void printPersonInfo(Person p)
{
    cout << "Name: " << p.name 
         << " | Age: " << p.age << endl << endl;
}

int main() 
{ 
    int n = 8, m = 6; 
    float x = 4.5, y = 5.5; 
  
    swap(&n, &m); // swap(int*, int*) 
    swap(&x, &y); // swap(float*, float*) 

    Person s = {45, "Jack Moore"}; 
    Person t = {40, "Russ Lewis"}; 

    printPersonInfo(s);
    printPersonInfo(t);
    swap(&s, &t); // swap(person*, person*) 
    printPersonInfo(s);
    printPersonInfo(t);
    
    return 0; 
} 


