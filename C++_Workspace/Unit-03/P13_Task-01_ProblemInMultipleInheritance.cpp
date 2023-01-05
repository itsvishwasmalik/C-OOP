#include<iostream>
using namespace std;
 
class class1{
    public:
        void display()
        {
            cout<<"This is class 1"<<endl;
        }
};

class class2{
    public:
        void display()
        {
            cout<<"This is class 2"<<endl;
        }
};

class class3:public class1,public class2{
    public:
        using class1::display;
        void display2(){
            cout<<"This is class 3"<<endl;
        }
};

int main()
{
    class3 obj;
    obj.display2();
    obj.display();
    return 0;
}