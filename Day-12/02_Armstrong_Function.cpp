#include<iostream>
#include<cmath>
using namespace std;
int Armstrong(int n){
    int sum=0,temp,count=0;
    temp=n;
    while(n>0){
        count++;
        n/=10;
    }
    n=temp;
    while(n>0){
        int x=n%10;
        sum=sum+round(pow(x,count));
        n/=10;
    }
    return temp==sum;
}
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==0){
        cout<<"armstrong";
    }
    else if(Armstrong(n)){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
    
}