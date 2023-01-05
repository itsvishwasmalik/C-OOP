#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    cout << "Size of different Primary datatypes in C++" << endl;

    cout << "Char: " << sizeof(char) << endl;
    cout << "Short: " << sizeof(short) << endl;
    cout << "Int: " << sizeof(int) << endl;
    cout << "Long Int: " << sizeof(long) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;
    cout << "Wide Char: " << sizeof(wchar_t) << endl;

    cout<<"Assigning values to different datatypes in C++\n";
    char c = 'A';
    short s=2;
    int i=1982;
    long l = 1928374;
    float f = 12.2;
    double d = 13.44;
    wchar_t w[] = L"Apple"; // Generates the base address of the string and store it in w
    wchar_t w1= L'A'; // Generate  ASCII value of the character and store it in w1

    cout<<"Maximum value of int = "<<INT_MAX<<endl;
    cout<<"Minimum value of int = "<<INT_MIN<<endl;
    cout<<"Maximum value of long = "<<LONG_MAX<<endl;
    cout<<"Minimum value of long = "<<LONG_MIN<<endl;
    return 0;
}