#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,prime=1;
    cout<<"Enter any number to print it's prime factor : ";
    cin>>num;
    int n=abs(num);
    if(n<2){
        cout<<"No prime Factor exist";
    }
    else{
        
        for(int i=n;i>=2;i--){
            prime=1;
            if(n%i==0){

                for(int j=2;j*j<=i;j++){
                    
                    if(i%j==0){
                        prime=0;
                        break;
                    }
                }
                if(prime==1){
                    cout<<i<<" is largest prime factor.";
                    break;
                }    
            }
        }
    }
    return 0;

}
