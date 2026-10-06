#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5 };
    vec.push_back(34); 

    vector<int>::iterator itr;

    // Displaying vector elements 
    cout << "The vector elements are:" << endl;
    
    for (itr = vec.begin(); itr < vec.end(); itr++)
        cout << *itr << " "; 
    cout << endl;

    vec[0] = 25;
    // without the iterator
    for (int n : vec)
        cout << n << ' ';

    return 0;
}
