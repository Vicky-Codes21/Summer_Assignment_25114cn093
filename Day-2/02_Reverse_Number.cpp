#include<iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout<<"Enter any number: ";
    cin>>n;
    while(n!=0){
        int d=n%10;
        reverse=reverse*10+d;
        n=n/10;
        
    }
    cout<<reverse;
    return 0;
}