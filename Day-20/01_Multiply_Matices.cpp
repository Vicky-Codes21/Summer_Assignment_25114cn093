#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter size of square matrix : ";
    cin>>n;
    int arr1[n][n];
    cout<<"Enter elements in arr1 : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[n][n];
    cout<<"Enter elements in arr2 : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    int result[n][n];
    cout<<"The multiplication of matices is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[i][j]=0;
            for(int k=0;k<n;k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}    