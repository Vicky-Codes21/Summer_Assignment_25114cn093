#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0,temp,count=0;
    cout<<"Enter a number : ";
    cin>>n; 
    temp=n;
    if(temp==0){
        cout<<"Armstrong Number.";
    }
    else{
        while(temp!=0){
        count++;
        temp=temp/10;
        }
        temp=n;
        while(temp!=0){

            int a=temp%10;

            sum=sum+round(pow(a,count));

            temp=temp/10;

        }
    
        if(sum==n){
            cout<<"Armstrong Number.";
        }
        else{
            cout<<"Not a Armstrong Number.";
        }
    }
    
    return 0;
}