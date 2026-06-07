#include<iostream>
using namespace std;
void Reverse(int n){
    if(n==0){
        return ;
    }
    cout<<n%10;
    Reverse(n/10);
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    Reverse(num);
    return 0;
}