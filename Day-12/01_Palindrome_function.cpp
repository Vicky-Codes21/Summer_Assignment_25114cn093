#include<iostream>
using namespace std;
int palindrome(int n){
    int sum,reverse=0;
    sum=n;
    while(n>0){
        int x=n%10;
        reverse=reverse*10+x;
        n/=10;
    }
    return reverse==sum;
    
}
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(palindrome(n)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}