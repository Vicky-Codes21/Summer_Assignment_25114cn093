#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int n,count=0;
    int last_digit=0;
    cout<<"Enter any Binary Number : ";
    cin>>n;
    if(n==0){
        cout<<0<<endl;
    }
    else{
        while(n>0){
            int x=n%10;
            last_digit=last_digit+round(pow(2,count))*x;
            count++;
            n/=10;
        }
        cout<<"Decimal Form : "<<last_digit;
    }
    return 0;
    
}
