#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int b = 12;

    // Arithmetic Operator [+,-,*,/]
    cout<<a<<" + "<<b<<" = " <<a + b << endl;

    // Remainder Operator
    cout<<a<<" % "<<b<<" = " << a % b << endl; // 10

    // Arithmetic Assignment Operator [+=,-=]
    int c;
    c += a; // c=c+a;

    // Increment & Decrement Operator [++,--]
    cout<<a<<"++ = " << a++ << endl;
    cout<<"++"<<a <<" = "<< ++a << endl;

    // both expressions are using decrement operator [--]
    // postfix and prefix operators
    cout<<"--"<<a<<" = " << --a << endl; // prefix decrement
    cout<<a<<"-- = " << a-- << endl; // postfix decrement

    // Logical Operators
    a = 2;
    b = 3;
    if (a > 1 && b < 2)
    {
        cout << "Logical And: True" << endl;
    }
    if (a > 1 || b < 2)
    {
        cout << "Logical Or: True" << endl;
    }
    if (a != 2)
    {
        cout << " Logicalnot equals to: True" << endl;
    }

    // Bitwise Operator[&,|]
    if (a > 1 & b < 2)
    {
        cout << "Bitwise And: True" << endl;
        cout << (a > 1 & b < 2) << endl;
    }
    if (a > 1 | b < 2)
    {
        cout << "Bitwise Or: True" << endl;
        cout << (a > 1 | b < 2) << endl;
    }

    // Conditional Operator
    int n1 = 5, n2 = 10, max;
    max = (n1 > n2) ? n1 : n2;
    cout << "Largest number between " << n1 << " and " << n2 << " is " << max << endl;

    // Relational Operators [>,<,>=,<=] --> {true,false}

    if (a > 0)
    {
        cout <<"Is " <<a << " greater than " << 0 << " ? "
             << " true" << endl;
    }
    
    return 0;
}