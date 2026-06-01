#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number to find the primes between the range from 1 to the number : ";
    cin>>x;
    for(int i=0;i<=x;i++){
        if(i==0){
            cout<<"0 is not prime."<<endl;
        }
        else if(i==1){
            cout<<"1 is not prime."<<endl;
        }
        else{
            int prime=1;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }  
            }
            if(prime==1){
                cout<<i<<" is prime. "<<endl;
                }
                else{
                cout<<i<<" is not prime."<<endl;
                }
        }   
    
    }
    return 0 ;
}                                     