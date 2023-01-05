#include<iostream>
using namespace std;

void pointerAndValue(){
    int a=1;
    int *ptr=&a;
    cout<<"Value of a using pointer: "<<*ptr<<endl;
}

void pointerAndArrayIncrement(){
    int a[]={1,2,3,4,5};
    int *ptr=a; // ptr will point a[0]
    ptr++; //ptr will incremented and it will now point a[1]
    // a++;//It will generate an error array increment is not possible
    // error: lvalue required as increment operand
    cout<<*a<<" "<<*ptr<<endl;


}

void arrayTraversingUsingPointer(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int a[n];
    int *ptr=a;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    cout<<"Entered values: ";
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}

void arrayOfIntPointer(){
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int a[n];
    int *ptr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ptr[i]=&a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=(*ptr[i])+2;
    }
    for(int i=0;i<n;i++){
        cout<<*(ptr[i])<<" ";
    }
    cout<<endl;
}

void pointerToPointer(){
    int a=3;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    cout<<"Address of a using pointer: "<<ptr1<<endl;
    cout<<"Address of a using referencing operator: "<<&a<<endl;
    cout<<"Address of ptr1 using pointer: "<<ptr2<<endl;
    cout<<"Address of ptr1 using referencing operator: "<<&ptr1<<endl;
    cout<<"Value of a using pointer: "<<*ptr1<<endl;
    cout<<"Value at ptr1 or value of a  using double pointer: "<<**ptr2<<endl;

}

int main()
{
    cout<<"Pointer and value: "<<endl;
    pointerAndValue();
    cout<<"Pointer and Array Increment: "<<endl;
    pointerAndArrayIncrement();
    cout<<"Array Traversing Using Pointer: "<<endl;
    arrayTraversingUsingPointer();
    cout<<"Array of Int Pointer: "<<endl;
    arrayOfIntPointer();
    cout<<"Pointer To Pointer: "<<endl;
    pointerToPointer();
    return 0;
}