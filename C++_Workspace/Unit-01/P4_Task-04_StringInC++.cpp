#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //Compairing string using inbuilt compare function and checking for the possible outcomes
    //Outputs of string.compare() --> 
    // 0 when both string are same  (X==0)
    // 1 when ascii value of str1[index_no] > str2[index_no]  (X>0)
    // -1 when ascii value of str1[index_no] < str2[index_no] (X<0)
    string str1,str2;

    str1="Hello";
    str2="World";
    cout<< str1.compare(str2)<<endl;

    str1="Hello";
    str2="Hello";
    cout<< str1.compare(str2)<<endl;

    str1="World";
    str2="Hello";
    cout<<"Compairing World with Hello" <<str1.compare(str2)<<endl;
            
    cout<<endl;
    return 0;
}