#include<iostream>
using namespace std;

void replaceSmallLetters(){
    cout<<"replacing small letters"<<endl;
    string s1;
    cin.sync();
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
    cout<<s1<<endl;
}

void replaceCapitalLetters(){
    string s1;
    cout<<"replacing capital letters"<<endl;
    cin.sync();
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
    cout<<s1<<endl;
}

int main()
{
    replaceSmallLetters();
    replaceCapitalLetters();
    return 0;
}