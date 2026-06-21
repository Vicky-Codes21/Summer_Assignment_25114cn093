#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of element : ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=0;i<x;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int _2ndlargest=-1;
    for(int i=0;i<x;i++){
        if(arr[i]>_2ndlargest && arr[i]!=largest){
            _2ndlargest=arr[i];
        }
    }
    cout<<"Second Largest Element is : "<<_2ndlargest;
    return 0;
}