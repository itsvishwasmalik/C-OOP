#include<iostream>
using namespace std;
 
 class Account{
    public:
        float salary=60000;
 };

 class Employee:public Account{
    public:
        float bonus=5000;
        void display(){
            cout<<salary<<endl;
        }
 };
 
int main(void)
{
    Employee p1;
    cout<<"Bonus: "<<p1.bonus<<endl;
    p1.display();
    
    cout<<"Salary: "<<p1.salary<<endl;
    return 0;
}