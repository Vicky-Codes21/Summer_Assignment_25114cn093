#include<iostream>
using namespace std;
int main (){
    int n1,n2;
    cout<<"Enter size of first array : ";
    cin>>n1;
    int a[n1];
    cout<<"Enter elements of the array (sorted): ";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter size of second array : ";
    cin>>n2;
    int b[n2];
    cout<<"Enter elements of the array (sorted): ";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    cout<<"Merged Array : ";
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<n1){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n2){
        cout<<b[j]<<" ";
        j++;
    }
    return 0;
}