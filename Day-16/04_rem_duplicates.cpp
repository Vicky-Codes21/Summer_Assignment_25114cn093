#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter the number of element : ";
    cin>>x;
    int arr[x];
    cout<<"Enter elements : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"Array after removing duplicates : ";
    for(int i=0;i<x;i++){
        bool duplicate=false;
        for(int j=0;j<i;j++){
            if (arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}