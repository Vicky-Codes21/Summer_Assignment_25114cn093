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
    int first=arr[x-1];
    for(int i=x-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=first;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
