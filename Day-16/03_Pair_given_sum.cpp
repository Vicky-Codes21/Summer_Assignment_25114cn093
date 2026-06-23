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
    int sum;
    cout<<"Enter the target sum : ";
    cin>>sum;

    bool found=false;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Pair found : "<<arr[i]<<" "<<arr[j]<<endl;
                found=true;
            }
        }
    }
    if(found==false){
        cout<<"No pair found";
    }
    return 0;
}    