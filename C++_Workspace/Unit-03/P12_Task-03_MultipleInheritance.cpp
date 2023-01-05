#include<iostream>
using namespace std;
 
class Mammals{
    public:
        void dipslay1()
        {
            cout<<"I am mammal."<<endl;
        }
};

class MarineAnimals{
    public:
        void dipslay2()
        {
            cout<<"I am a marine animal."<<endl;
        }
};


class BlueWhale:public Mammals,MarineAnimals{
    public:
        void display3(){
            cout<<"I belong to both the categories: Mammals as well as Marine Animals."<<endl;
        }

        void displayM(){
            dipslay1();
        }

        void displayMA(){
            dipslay2();
        }
};
 
int main()
{
    Mammals obj1;
    MarineAnimals obj2;
    BlueWhale obj3;
    obj1.dipslay1();
    obj2.dipslay2();
    obj3.display3();
    obj3.displayM();
    obj3.displayMA();
    return 0;
}