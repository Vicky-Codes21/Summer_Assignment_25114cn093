#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of element : ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements in the array : ";
    for(int i=0; i<x ; i++){
        cin>>arr[i];
    }
    cout<<"Duplicates Elements are : ";
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}