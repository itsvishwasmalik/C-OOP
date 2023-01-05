#include <iostream>
using namespace std;

int main()
{
    string a = "Hello";
    cout << &a << endl;
    a[0] = 'J';
    cout << &a << endl;
    cout << a << endl;
    cout<<"Strings are mutable as we can access them using index numbers and can change their values at particular index."<<endl;
    return 0;
}