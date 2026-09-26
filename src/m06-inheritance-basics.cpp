#include<iostream>

using namespace std;

// Parent/Super Class
class Person 
{
    public:
        Person() { } 
        Person(char* n, int a) { }
    protected: 
        int age; 
        char *name; 
};

// Child/Sub Class
class Student: public Person 
{ 
    public: 
        Student() { }
        Student(char* n, int a, char* i): Person(n, a) { }
    // protected: 
    //     char *id; 
}; 

int main()
{
    Person p("Max", 13);
    Student x("Joe", 12, "012"); 

    Student y("Joe2", 11, "123");

    // not possible?
    y = (Student) p;

    p = (Person) x;

}
