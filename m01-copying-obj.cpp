#include<iostream>
// C correspondent string interface - strlen
#include<string.h>

using namespace std;

class String
{
    private:
        char* storageM;
        int lengthM;
    public: 
        String();
        char* getString();
        void setString(const char* str);
        int getLength();
};

String::String()
{
    storageM = new char('\0');
    lengthM = 0;
}

void String::setString(const char* str)
{
    delete[] storageM;
    lengthM = (int)strlen(str);
    // +1 because of the null-end character
    storageM = new char[lengthM + 1];
    strcpy(storageM, str);
}

char* String::getString()
{
    return storageM;
}

int String::getLength()
{
    return lengthM;
}

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "- Copying Objects - Custom String Class -" << endl;
    cout << "-----------------------------------------" << endl << endl;

    String s1;
    cout << "s1: [" << s1.getString() << "]" << endl;

    // setting a custom string
    const char* str = "string test";
    s1.setString(str);
    cout << "s1: [" << s1.getString() << "] - len: " << s1.getLength() << endl << endl;

    // s2: another String object
    String s2;
    s2 = s1;
    const char* str2 = "string 2";
    s2.setString(str2);
    cout << "s2: [" << s2.getString() << "] - len: " << s2.getLength() << endl;
    cout << "s1: [" << s1.getString() << "] - len: " << s1.getLength() << endl;

    cout << "Done!" << endl;
    return 0;
}