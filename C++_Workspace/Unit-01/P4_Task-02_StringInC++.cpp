#include <iostream>
#include<string.h>
using namespace std;

void pallindrome()
{
    string s1;
    getline(cin,s1);
    int flag=1;
    int l=s1.length();
    for(int i=0,j=(l-1);i<j;i++,j--){\
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
        if(s1[j]>='A' && s1[j]<='Z'){
            s1[j]=s1[j]+32;
        }
        if(s1[i]!=s1[j]){
            flag=0;
            break;
        }        
    }
    if(flag!=1){
        cout<<" No it is not a Palindrome";
    }
    else{
        cout<<" Yes, it is a palindrome";
    }
}
int main()
{   
    pallindrome();
    return 0;
}