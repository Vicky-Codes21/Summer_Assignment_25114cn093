#include<iostream>
using namespace std;
int main(){
    int n,prime=1;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<2){
        cout<<"NOT PRIME";
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        cout<<"Number is prime. ";
    }
    else{
        cout<<"Number is not prime.";
    }
    
    return 0;
}