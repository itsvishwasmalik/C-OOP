#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //Trying to add string to a integer and see how compiler react to it
    string str="ABC";
    int a=1;
    string str2 = str+a; 
    cout<<str2;
    return 0;
}