#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(isprime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}