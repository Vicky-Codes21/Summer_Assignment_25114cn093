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
    int maxfrequency=0,maxelement=arr[0];
    for(int i=0;i<x;i++){
        int count=0;
        for(int j=0;j<x;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfrequency){
            maxfrequency=count;
            maxelement=arr[i];
        }
    }
    cout<<"Max frequency element : "<<maxelement<<endl;
    cout<<"Frequency : "<<maxfrequency;
    return 0;
}