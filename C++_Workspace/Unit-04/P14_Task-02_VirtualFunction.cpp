/*
    Consider above scenario and perform given tasks:
    1- Try to call base class add (int, float) method from child class reference/pointer
    2- Try to call base class add (int, float) method from base class reference/pointer
    3- Fix your code in such a way so, child calss add (int,int) will always be called
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

        virtual void add(int x,int y)
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
        void add(int x)
        {
            cout<<"Sum of add(int,float) from child class = "<<(x+100)<<endl;
        }
        void add(int x,int y)
        {
            cout<<"Sum of add(int,int) from child class = "<<(x+y)<<endl;
        }
};
 
int main()
{
    base *b1 = new base();
    base *b = new child();
    child *c = new child();
    int x=1,y=2;
    float z=3.1;

    c->add(x,z); // Calling add(int,float) from child class pointer
    b1->add(x,z); // Calling add(int,float) from base class pointer
    
    // Always calling child class add(int,int)
    b->add(x,y);
    c->add(x,y);
    
    return 0;
}