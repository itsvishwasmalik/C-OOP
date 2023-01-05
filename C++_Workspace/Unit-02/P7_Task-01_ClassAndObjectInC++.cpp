#include<iostream>
#include<string.h>
using namespace std;

class Student{
    string name;
    int r_no;
    long long int ph_no;
    string address;
    public:
        Student(string name,int r_no, long long int ph_no,string address){
            this->name=name;
            this->r_no=r_no;
            this->ph_no=ph_no;
            this->address=address;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<r_no<<endl;
            cout<<"Phone Number: "<<ph_no<<endl;
            cout<<"Address: "<<address<<endl;
            
        }
};

int main(){
    Student obj1("Sam",1234,4435898742,"Dehradun");
    Student obj2("John",1235,5675178943,"Dehradun");
    obj1.display();
    obj2.display();
    return 0;
}