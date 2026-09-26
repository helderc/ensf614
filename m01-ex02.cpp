#include<iostream>

int main() 
{
    // Pointer to a constant. 
    const char* s = "ABCD";
    s[0] = 'M';
    s++;

    // Constant Pointer.
    char a[4] = "XYZ";
    char* const cp = a; 
    cp++;
    cp[0] = 'M';

    // Constant Pointer to a constant
    char a[4] = "XYZ";
    const char* const cpc = a; 
    cpc++;
    cpc[0] = 'M';

}