#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //Input;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of the array is : "<<sum<<endl;
    cout<<"Avg of the array is : "<<(float)sum/n;
    return 0;
}