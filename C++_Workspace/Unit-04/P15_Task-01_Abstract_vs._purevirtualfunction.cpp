/*
    Explain the concepts by a c++ program, consider a function declared in base class and defined in child
    class.
*/

#include<iostream>
using namespace std;
 
 class base
 {
    public:
        int x,y;
        base()
        {
            this->x=2;
            this->y=5;
        }
        virtual void add(int x,int y)=0;
 };
 
 class child
 {
    public:
        void add(int x,int y)
        {
            cout<<"Sum using child class: "<<(x+y)<<endl;
        }
 };

int main()
{
    /* base b; error: cannot declare variable 'b' to be of abstract type 'base'
     b.add(2,3); */
    child c;
    c.add(2,3);
    return 0;
}