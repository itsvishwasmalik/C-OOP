/* 1- Add two add methods (int,int) and (int, float)
    2- Add one more add method in child class (int, float)

Perform following tasks:
 1. Try calling overloaded method from base and child class object.
 2. Try calling overriding method from child class object.
 3. Find methods which can not not seen by the child class object
 */
#include<iostream>
using namespace std;

class base
{
    public:

        int x,y;
        float z;

        base(){
            x=3;
            y=4;
            z=3.4;
        }

        void add(int x,int y)
        {
            cout<<"Sum of add(int,int) from base class = "<<(x+y)<<endl;
        }
        void add(int x,float z)
        {
            cout<<"Sum of add(int,float) from base class = "<<(x+y)<<endl;
        }
};

class child:public base
{
    public:

        using base::add;
        void add(int x,float y)
        {
            cout<<"Sum of add(int,float) from child class = "<<(x+y+100)<<endl;
        }
};

int main()
{
    base b;
    child c;
    int x=1,y=2;
    float z=3;
    b.add(x,y);
    b.add(x,z);
    c.add(x,z);
}