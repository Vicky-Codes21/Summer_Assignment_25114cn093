#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number of element in array : ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements : ";
    for(int j=0 ; j<x ; j++){
        cin>>arr[j];
    }
    int num;
    cout<<"Enter the number to search : ";
    cin>>num;
    bool found = false;
    for(int i=0; i<x; i++){
        if(arr[i]==num){
            cout<<"Found at index"<< i;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Not found";
    }
    return 0;
}