#include<iostream>
#include<string.h>
using namespace std;

class Telcall{
    long long int phno;
    int n=0;
    string sname;
    float amt=0;
    public:
    int setData(){
        cout<<"Enter name of subscriber: ";
        cin.sync();
        getline(cin,sname);
        cout<<"Enter phone number :";cin>>phno;
        cout<<"Number of calls: ";cin>>n;
        return n;
    }
    void compute(int n){
        if(1<=n && n<=100){
            amt=500;
        }
        else if(101<=n&&n<=200){
            amt=500+((n-100)*1);
        }
        else if(201<=n&&n<=300){
            amt=500+(100*1)+((n-200)*1.20);
        }
        else if(n>300){
            amt=500+(100*1)+(100*1.20)+((n-300)*1.50);
        }
        else{
            cout<<"Number of calls is 0 so no amount";
        }
        
    }

    void display(){
        cout<<"Name of the subscriber: "<<sname<<endl;
        cout<<"Phone number: "<<phno<<endl;
        cout<<"Number of calls: "<<n<<endl;
        cout<<"Total amount of subscriber: "<<amt;
    }
};

int main()
{
    Telcall obj;
    int n=obj.setData();
    obj.compute(n);
    obj.display();
    return 0;
}