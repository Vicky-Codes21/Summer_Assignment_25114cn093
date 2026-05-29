#include<iostream>
using namespace std;
int main(){
    int product=1,d,n;
    cout << "Enter any number : ";
    cin>>n;
    while(n!=0){
        d=n%10;
        product=product*d;
        n=n/10;
    }
    cout<<"Product is "<<product;
    return 0;
}
