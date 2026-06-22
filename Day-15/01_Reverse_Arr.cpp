#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter the number of element : ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=x-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}