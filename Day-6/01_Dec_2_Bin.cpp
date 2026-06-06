#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int place=1,n;
    long long binary=0 ; 
    cout<<"Enter a Decimal Number : ";
    cin>>n;
    if (n==0){
        cout<<"Binary: 0";
    }
    else {
        while( n>0 ){
            int rem=n%2;
            binary=binary+place*rem;
            place*=10;
            n/=2;
        }
        cout<<"Binary Form : "<<binary;
    }
    return 0;
}
