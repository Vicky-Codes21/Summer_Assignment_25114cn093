#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of the arr : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements in arr : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<"Row "<<i+1 <<"Sum = "<<sum<<endl;
    }
    return 0;
}