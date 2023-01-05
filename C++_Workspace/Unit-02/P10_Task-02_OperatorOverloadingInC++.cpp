#include<iostream>
using namespace std;

class ABC{
    private:
        int a;
    public:
        ABC(int a){
            this->a=a;
        }
        friend void operator++(ABC obj);
        friend void operator++(ABC obj, int);       
};

void operator++(ABC obj, int){
    obj.a = obj.a + 1;
    cout <<"Value of post increment " <<obj.a << endl;
}

void operator++(ABC obj){
    obj.a=obj.a+1;
    cout<<"Value of pre increment "<<obj.a<<endl;
}

int main()
{
    ABC obj(10);
    ++obj;

    ABC obj2(5);
    obj2++;
    return 0;
}