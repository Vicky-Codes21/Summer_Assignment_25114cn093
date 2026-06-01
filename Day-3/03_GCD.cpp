/*method --1 using while loop and euclid's 
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter 2 numbers to find their GCD : ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"UNDEFINE";
    }
    else{
        while(y!=0){
            int t=y;
            y=x%y;
            x=t;
        }
        cout<<"GCD of the number is "<<x;
    }
    return 0;
}*/
/*method--2 using for loop 
#include<iostream>
using namespace std ;
int main(){
    int gcd,x,y;
    cout<<"Enter the number for GCD : ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"UNDEFINE";
    }
    else{
        for(int i=1;i<=x && i<=y;i++){
            if(x%i==0 && y%i==0){
                gcd=i;
            }
        }
        cout<<"GCD = "<<gcd;
    }
    
    return 0;
}
*/
//method--3 using subtraction
#include <iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"Enter 2 numbers to calculate GCD : ";
    cin>>x>>y;
    while(x!=0){
        if(x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }
    cout<<"GCD = "<<x;
    return 0;
}