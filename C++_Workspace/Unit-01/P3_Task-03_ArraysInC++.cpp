#include<iostream>
using namespace std;
void arrayPairSum(){
    int n,max=0,m,k;
    cout<<"Enter the max limit of the array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the sum  to find combinations for: ";
    cin>> k;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(max<arr[i]){
            max=arr[i];
            }
    }
    int count[max]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]=1;
    }
    for(int i=0;i<max;i++){
        if(count[(k-arr[i])]==1 && arr[i]<k-arr[i]){
            cout<<arr[i]<<","<<k-arr[i]<<endl;
        }
    }
}
int main(){
    arrayPairSum();
    return 0;
}