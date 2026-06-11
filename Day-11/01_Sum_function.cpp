#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"Enter 2 number : ";
    cin>>x>>y;
    cout<<sum(x,y);
    return 0;
}