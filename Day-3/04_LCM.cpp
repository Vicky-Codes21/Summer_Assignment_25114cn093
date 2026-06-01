#include<iostream>
using namespace std;
int main(){
    int x,y,GCD,LCM;
    cout<<"Enter 2 numbers to find their LCM : ";
    cin>>x>>y;
    int a,b;
    a=x;
    b=y;
    if(a==0 && b==0){
        cout<<"UNDEFINE";
    }
    else{
        while(b!=0){
            int t=b;
            b=a%b;
            a=t;
        }
        GCD=a;
        LCM=(x*y)/GCD;
        cout<<"LCM of the number is "<<LCM;
    }
    return 0;
}