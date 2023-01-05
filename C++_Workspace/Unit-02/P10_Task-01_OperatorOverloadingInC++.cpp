#include<iostream>
#include<string>
using namespace std;

string operator+(string s,int a){

    string c = to_string(a);
    return s+c;
}

int main()
{
    int a=123;

    string s ="gehu@";

    string c=s+a;
    cout<<"Sum of string and int using operator overloading: "<<c<<endl;
    return 0;
}