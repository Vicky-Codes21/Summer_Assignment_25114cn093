#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
    int num;
    cout<<"Enter number to find the fibonacci term : ";
    cin>>num;
    cout<<"Fibonacci term = "<<Fibonacci(num);
    return 0;
}