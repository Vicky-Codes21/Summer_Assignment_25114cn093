#include<iostream>
using namespace std;
int sum_digit(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum_digit(n/10);
}
int main(){
    int num;
    cout<<"Enter a muber to find it's digit sum : ";
    cin>>num;
    cout<<"Digit sum : "<<sum_digit(num);
    return 0;
}