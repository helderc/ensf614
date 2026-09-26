#include<iostream>

using namespace std;

int main()
{
    cout << "-----------------------" << endl;
    cout << "- Arrays and Pointers -" << endl;
    cout << "-----------------------" << endl << endl;

    cout << "uninitialized pointer --> random values here" << endl;
    int arr[5];
    // int arr[5] = {0}; initializes it with 0s

    // initial address of arr
    cout << "arr: " << arr << endl;
    cout << "&arr[0]: " << &arr[0] << endl << endl;
    
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << arr[1] << endl;
    cout << "arr[2]: " << arr[2] << endl;
    cout << "arr[3]: " << arr[3] << endl;
    cout << "arr[4]: " << arr[4] << endl << endl;

    int arr2[4] = {1, 2, 3, 4};

    cout << "arr2[0]: " << arr2[0] << endl;
    cout << "arr2[1]: " << arr2[1] << endl;
    cout << "arr2[2]: " << arr2[2] << endl;
    cout << "arr2[3]: " << arr2[3] << endl << endl;

    for (int i = 0; i < 4; i++) {
        // the addresses points to a sequence of elements
        cout << "arr2[" << i << "] = " << arr2[i] << "; &arr2[i]: " << &arr2[i] << endl;
    }
    
    // what is the size of an 'int'?
    cout << "sizeof(int): " << sizeof(arr2[0]) << endl << endl;

    int* initial_addr = &arr2[0];
    for (int i = 0; i < 4; i++) {
        // don't need i as an index anymore
        cout << "arr2: " << *(initial_addr + i) << "; ";
        cout << "addr: " << initial_addr + i << endl;
    }

    return 0;
}