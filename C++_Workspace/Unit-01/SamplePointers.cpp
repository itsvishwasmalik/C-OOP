#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // return 0;

    
    // 1.Null Pointer
    int *ptr1=NULL;
    // cout<<ptr1;
    // It signals that the pointer is not intended to point to  an accessible memory location.

    // 2.Pointer Arithmetic
    // int *ptr2;
    // int arr[3]={0,1,2};
    // ptr2=&arr[0]; 
    // ptr2++; // ptr2--;
    // int *p1=&arr[0];
    // int *p2=&arr[2];
    // cout<<*ptr2;

    // if(p1<p2){
    //     cout<<"True"<<endl;
    // }
    // else{
    //     cout<<" False"<<endl;
    // }
    // 3. Pointers Vs array
    int arr[3]={0,1,2};
    int *ptr[3];
    for(int i=0;i<3;i++){
        ptr[i]=&arr[i];
    }
    for(int i=0;i<3;i++){
        cout<<"Value "<<*ptr[i]<<endl;
    }

    // 4. Array of Pointer
    // 5. Pointer to Pointer
    // 6. return Pointer to function
    // 7. Passing pointers to function

    //Task
    //2. pointerAndValue();
    //1.Pointer incremenet and array increment(arr++ or arr=arr+1 which of these is true); pointerAndArrayIncrement();
}