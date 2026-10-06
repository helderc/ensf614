#include<iostream>
#include<array>
#include<iterator>

using namespace std;

int main()
{
    array<int, 5> a = {1, 2, 3, 7}; 
    a.back() = 9; 
    
    array<int, 5>::iterator itr2; 

    // Displaying array elements
    cout << "The array elements are:" << endl;

    for (itr2 = a.begin(); itr2 < a.end(); itr2++)
        // only itr2 will give you the addresses
        cout << *itr2 << " "; 

    return 0; 
} 
