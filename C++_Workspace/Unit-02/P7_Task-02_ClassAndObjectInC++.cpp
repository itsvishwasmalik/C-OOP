#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int year;
        char section;
        float marks;
        string college;
        static float total;
    public:
        void setData(string name,int age,char section,float marks){
            this->name=name;
            this->age=age;
            this->section=section;
            this->marks=marks;
            total=total+marks;
        }
        Student(){
            college = "Graphic era Hill university";
        }
        float marksTotal(){
            return total;
        }
};

float Student::total=0;

int main()
{
    Student obj[5];
    string name; char section;
    int age,year,i; float marks;
    for(i=0;i<4;i++){
        cout<<"Enter student name: "; getline(cin,name);
        cout<<"Enter student age: "; cin>>age;
        cout<<"Enter student year: "; cin>>year;
        cout<<"Enter student section: "; cin>>section;
        cout<<"Enter student makrs: "; cin>>marks;
        cin.sync();
        obj[i].setData(name,age,section,marks);
    }
    float total=obj[i].marksTotal();
    cout<<"Total marks of all students: "<<total<<" ";
}