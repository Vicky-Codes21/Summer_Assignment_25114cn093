#include<iostream>
using namespace std;
int main(){
    int x,divsr=0,sum=0;
    cout<<"Enter a number to check whethe it's perfect or not : ";
    cin>>x;
    if(x==0){
        cout<<"Not a Perfect Number.";
    }
    else{
        for(int i=1;i<x;i++){
            if(x%i==0){
                sum=sum+divsr;
            }
        }
        if(sum==x){
            cout<<"Perfect Number";
        }
        else{
            cout<<"Not a Perfect Number.";
        }
    }
    return 0;
}