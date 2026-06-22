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
    int j=0;
    for(int i=0;i<x;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<x){
        arr[j]=0;
        j++;
    }
    cout<<"Updated Array"<<endl;
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}