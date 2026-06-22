#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of element : ";\
    cin>>x;
    int arr[x];
    cout<<"Enter the elements : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int last=arr[0];
    for(int i=0;i<x-1;i++){
        arr[i]=arr[i+1];
    }
    arr[x-1]=last;
    cout<<"Left Rotation"<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}