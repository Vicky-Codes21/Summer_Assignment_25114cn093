#include<iostream>
using namespace std;
int main(){
    int n,fact,sum=0;;
    cout<<"Enter a number to check whether it's a strong number or not : ";
    cin>>n;
    int temp=n;
    while(temp!=0){
        int a=temp%10;
        if(a==0){
            fact=1;
        }
        else{
            fact=1;
            for(int i=1;i<=a;i++){
                fact=fact*i;
            }
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a strong Number";
    }
    return 0;
}