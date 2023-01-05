#include<iostream>
using namespace std;

class AreaPolygon{
    int s,l,b;
    public:
        AreaPolygon(int a){
            s=a;
            Area(s);
        }
        AreaPolygon(int ln, int bd){
            l=ln;
            b=bd;
            Area(l,b);
        }
        void Area(int x){
            cout<<"Area of square = "<<x*x<<" units square"<<endl;
        }
        void Area(int ln,int bd){
            cout<<"Area of rectangle = "<<ln*bd<<" units square"<<endl;
        }

};

int main()
{
    int s,l,b;
    cout<<"Enter side of square: ";
    cin>>s;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    AreaPolygon o1(s);
    AreaPolygon o2(l,b);

    return 0;
}