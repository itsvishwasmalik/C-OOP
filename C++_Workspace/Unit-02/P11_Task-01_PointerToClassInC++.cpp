#include<iostream>
using namespace std;

class ABC{
    public:
        int a,b;
        void setData(int a,int b){
            this->a=a;
            (*this).b=b;
        }
        void display(){
            cout<<"Value of a and b using this pointer: "<<this->a<<" "<<this->b<<endl;
        }
};

int main()
{
    ABC *ptr = new ABC;

    ptr->setData(1,2);
    ptr->display();
    cout<<"Value of a and b using ptr pointer: ";
    cout<<(*ptr).a<<" ";
    cout<<(*ptr).b<<endl;

    return 0;
}