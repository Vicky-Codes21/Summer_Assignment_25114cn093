#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter elemet to search : ";
    cin>>key;
    int low=0;
    int high=n-1;
    bool found=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Element found at index "<<mid;
            found=true;
            break;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found==false){
        cout<<"Element Not found";
    }
    return 0;
}