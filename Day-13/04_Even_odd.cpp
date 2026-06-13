#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    int ecount=0;
    int ocount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ecount++;
        }
        else{
            ocount++;
        }
    }
    cout<<"Number of even : "<<ecount;
    cout<<"Number of odd : "<<ocount;
    return 0;
}