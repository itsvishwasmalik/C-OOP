#include <iostream>
using namespace std;
/*
    Header file is a collection of class object. Eg.. <iostream>

    Variable Search

    local scope-> global scope-> namespace!


*/
namespace std1
{
    int x = 10;
    void display(){
        cout<<"Value of x  from namespace std1 = ";
    }
}

namespace std2
{
    int x = 12;
    void display(){
        cout<<"Value of x  from namespace std2 = ";
    }
}

int x = 11;

int main()
{
    std1::display();
    cout << std1::x <<endl;
    std2::display();
    cout << std2::x << endl;
    cout<<"Value of x from global variable = ";
    cout << x << endl;
    return 0;
}