#include<iostream>
using namespace std;
void replaceSmallLetters(){
    string s1;
    getline(cin,s1);
    int l=s1.length();
    for(int i=0;i<l;i++){
        if(s1[i]>=97 && s1[i]<=121){
            s1[i]++;
        }
        if(s1[i]=='z'){
            s1[i]='a';
        }
    }
    cout<<s1;
}

void replaceCapitalLetters(){
    string s1;
    getline(cin,s1);
    int l=s1.length();
    for(int i=0;i<l;i++){
        if(s1[i]>=65 && s1[i]<=89){
            s1[i]++;
        }
        if(s1[i]=='Z'){
            s1[i]='A';
        }
    }
    cout<<s1;
}

void pallindrome()
{
    string s1;
    getline(cin,s1);
    string s2=s1;
    int l=s1.length();
    for(int i=0,j=(l-1);i<j;i++,j--){
        char temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }
    if((s1==s2)!=1){
        printf("Not pallindrome");
    }
    else{
        printf("Pallindrome");
    }
}
int main()
{   
    // replaceSmallLetters();
    // replaceCapitalLetters();
    //stringMutableOrNot();
    pallindrome();
    return 0;
}