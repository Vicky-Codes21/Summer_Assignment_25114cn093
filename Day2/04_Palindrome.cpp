#include<iostream>
using namespace std;
int main(){
    int n,d,sum;
    int reverse=0;
    cout<<"Enter a number : ";
    cin>>n;
    sum=n;
    while(n!=0){
        d=n%10;
        
        reverse=reverse*10+d;
        n=n/10;
    }
    if(reverse==sum){
        cout<<"Number is palindrome.";
    }
    else{
        cout<<"Number is not palindrome.";
    }
    
    
    return 0;
}