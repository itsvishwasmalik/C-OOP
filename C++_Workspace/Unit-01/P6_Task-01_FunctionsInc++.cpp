#include<iostream>
using namespace std;

int lessCohesive(int a,int b){
    a=a+b+5;
    return a;
}

void callByValueAndAddress(int a,int *ptr){
    int c=10+a;
    int d=50-a;
    cout<<"Function using call by value performing addition "<<c<<endl;
    cout<<"Function using call by value performing subtraction "<<d<<endl;
}

inline int multiply(int a,int b){
    return a*b;
}

int recursiveFunction(int fact){

    
    if(fact==0 || fact==1){
        return 1;
    }
    else{
        return fact*recursiveFunction(fact-1);
    }
}


int main()
{
    int n,n1=8;
    cout<<"Enter number to perform operations: ";
    cin>>n; 
    cout<<"Less cohesive function output: "<<lessCohesive(n,n1)<<endl;
    cout<<"inline function output: "<<multiply(n,n)<<endl;
    cout<<"Call By Value and Address function: "<<endl;
    callByValueAndAddress(n,&n);
    cout<<"Recursion Function: "<<endl;
    int res=recursiveFunction(n);
    cout<<"Factorial of "<<n<<" = "<<res<<endl;

    return 0;
}