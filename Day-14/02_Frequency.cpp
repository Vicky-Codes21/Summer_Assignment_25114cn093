#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of elements : ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements : ";
    for(int i =0;i<x;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number whose frequency you want to find : ";
    cin>>num;
    int count=0;
    for(int i =0;i<x;i++){
        if(arr[i]==num){
            count++;
        }
    }
    cout<<"Frequency = "<<count;
    return 0;
}