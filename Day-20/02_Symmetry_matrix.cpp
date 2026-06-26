#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements in the arr : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int transpose[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    bool symmetry=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(transpose[i][j]!=arr[i][j]){
                symmetry=false;
                break;
            }
        }
        if(!symmetry){
            break;
        }
    }
    if(symmetry){
        cout<<"Symmetry ";
    }
    else{
        cout<<"Not symmetry";
    }
    return 0;
}