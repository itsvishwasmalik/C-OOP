#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //Compairing string using inbuilt compare function

    string str1="Hello",str2="World";
    cout<< str1.compare(str2); //memory efficient    
    cout<<endl;
    return 0;
}