#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter any Binary number to count its set bits : ";
    cin>>n;
    if(n==0){
        cout<<"There is no set bit.";
    }
    else{
        while(n>0){
            int digit =n%10;
            if(digit!=1 && digit!=0){
                cout<<" invalid Binary Number " ;
                return 0;
            }
            if(digit==1){
                count++;
            }
            n/=10;
        }
        cout<<"Set count = "<<count;
    }
    return 0;
}