#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter the number of element : ";
    cin>>x;
    int arr[x-1];
    cout<<"Enter elements : ";
    for(int i=0;i<x-1;i++){
        cin>>arr[i];
    }
    int actualsum=0;
    for(int i=0;i<x-1;i++){
        actualsum+=arr[i];
    }
    int expectedsum=x*(x+1)/2;
    cout<<"Missing Number = "<<expectedsum-actualsum;
    return 0;
}    