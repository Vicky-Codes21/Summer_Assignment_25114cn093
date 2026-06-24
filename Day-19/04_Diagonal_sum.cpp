#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size o square matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int primarysum=0;
    int secondarysum=0;
    for(int i=0;i<n;i++){
        primarysum+=arr[i][i];
        secondarysum+=arr[i][n-1-i];
    }
    cout<<"Primary Diagonal sum : "<<primarysum<<endl;
    cout<<"Secondary Diagonal  sum : "<<secondarysum;
    return 0;
}