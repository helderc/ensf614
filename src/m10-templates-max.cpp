#include <cstring> 
#include <iostream> 

using namespace std; 

template <class T> 
T max(T *d, int size) ; // template prototype 

template<> 
char* max(char** s, int size); // specialization template prototype 


template <class T> 
T max(T *d, int size) 
{ 
    T max = d[0]; 

    for(int i = 0; i < size; i++) {
       if(d[i] > max) 
           max = d[i]; 
    }

    return max; 
}

// specialization of max 
template<> 
char* max(char** s, int size) 
{ 
    char* max = s[0]; 

    for(int i = 0; i < size; i++) {
        if(strcmp(s[i], max) > 0) 
            max = s[i]; 
    } 

    return max; 
} 



int main() { 
    int i[5] = {4, 8, 9, 3, 100}; 
    double d[5] = {66, 9, 0, 55, 88};
    const char* s[3] = {"abc", "xyz", "klm"}; 

    cout << "\tmax of i array is: " << max(i,5) << endl; 
    cout << "\tmax of d array is: " << max(d,5) << endl; 
    cout << "\tmax of s array is: " << max(s,3) << endl;

    return 0; 
}
