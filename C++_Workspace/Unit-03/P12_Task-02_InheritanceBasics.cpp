#include<iostream>
using namespace std;

class ABC{
    public:
        int a;

        ABC(){
            a=10;
        }

        void display(){
            cout<<a<<endl;
        }
};

class ABCD: public ABC{
    public:

        // display(); //We can not call a method 

        // //Not advisable to call a function of parent class using constructor
        // ABCD(){
        //     display();
        // }

        void display2(){
            display();
        }
        
};

int main(){
    ABCD obj;
    obj.display2();

    //Call parent class method from main
    obj.display();
    //When display in super class is public
    //Inherited in public mode

    return 0;
}