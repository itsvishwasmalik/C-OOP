#include<iostream>
using namespace std;
 
class class1
{
    private:
        //Members and  method in this can't be accessed anywhere 
        void display_pv()
        {
            cout<<"This is private function of class1."<<endl;
        }
    protected:
        //Members and  method in this can be accessed in child but not with the object of child class 
        void display_pt()
        {
            cout<<"This is protected function of class1."<<endl;
        }
    public:
        //Members and  method in this can be accessed using this class object as well as child class object if inherited in public mode
        void display_pb()
        {
            cout<<"This is public function of class1."<<endl;
        }
};

class class2:public class1
{
    // class1 members and methods can be called using this class objects and can be accessed in child class of this class
    public:
        void display()
        {
            cout<<"This is class 2"<<endl;
        }
    
};
 
class class3:protected class1
{
    // class1 members and methods can't be called using this class objects but can be accessed in child class of this class
    public:
        void display()
        {
            cout<<"This is class 3"<<endl;
        }
};

class class4:private class1
{
    // class1 members and methods can't be called using this class objects and can't be accessed in child class of this class
    public:
        void display()
        {
            cout<<"This is class 4"<<endl;
        }
    
};
int main()
{
    //Creating objects of all class
    class1 c1;  class2 c2;  class3 c3;  class4 c4;

    //Calling function of parent class using objects
    c1.display_pb();
    c2.display_pb();

    /*

    These calls will generate error

    1.Trying to call protectd function of parent class
        c1.display_pt();    c2.display_pt();    c3.display_pt();    c4.display_pt();
    
    2. Trying to call private function of parent class
        c1.display_pv();    c2.display_pv();    c3.display_pv();    c4.display_pv();

    3. Trying to call public function of parent class from child class when inherited in protected or private mode
        c3.display_pb();    c4.display_pb();

    */

    return 0;
}