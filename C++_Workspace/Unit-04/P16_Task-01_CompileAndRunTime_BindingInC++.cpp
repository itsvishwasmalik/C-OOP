#include<iostream>
using namespace std;
 
class base
{
    public:
        void add(int a,int b)
        {
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        }

        void add(double a,double b)
        {
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        }

        virtual void display()
        {
            cout<<"This is base class display()."<<endl;
        }
};
 
class child: public base
{
    public:
        void display()
        {
            cout<<"This is child class display()."<<endl;
        }
};

int main()
{
    base *b1=new child();

    //Compile time polymorphism
    b1->add(2,3);
    b1->add(2.1,3.2);

    //Run time polymorphism   (virtual function is used)
    b1->display();

    return 0;
}