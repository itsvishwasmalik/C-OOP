#include<iostream>
using namespace std;
int main()

{
    // string s1 = "Hello World";
    // cout<<s1<<endl; 
    // cout<<s1+" World"<<endl;    
    // cout<<s1+4; // Generate an error does not support it (Invalid operator) (due to non define ) 
    // cout<<s1.append(" World");
    // s1[0]='J';
    // cout<<s1;
    // return 0;

    /*
    1.Concatenation
    string s1="Hello ";
    string s2="World";
    string s3=s1+s2;

    // 2.Append
    string s1="Hello ";
    string s2="World";
    string s3=s1.append(s2);
    cout<<s1;

    // 3.Numbers and String


    // 4.String length
    string s5="Himanshu";
    int l=s5.length();
    int s=s5.size();

    // 5.Access String
    string s1="Hello";
    cout<<s1[1];
    s1[2]=w;
    cout<<s1;
*/
    // 6.User Input String
    // string s7;
    // getline(cin,s7); //Complete line
    // cout<<s7<<endl;
    // string s8;
    // cin>>s8;
    // cout<<s8<<endl; // Word before first space

    //compairing string     
    string str1="Hello ",str2="World";
    cout<< (str1 == str2) << endl; //0 for false and 1 for true
    cout<< str1.compare(str2); //memory efficient
    cout<<endl;
    
    // string a="Hello";
    // cout<<&a<<endl;
    // a[0]='j';
    // cout<<&a<<endl;
    // cout<<a<<endl;
    //since address are same so string are mutable


    //compare,mutable,pallindrome,changing character of string to next character
    
    
}