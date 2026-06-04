#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int num;

    cout<<"Enter a number to print  it's factor : ";
    cin>>num;

    if(num==0){
        cout<<"All non-zero integer is factor of zero";
    }

    //Zero is not consider as factor of zero , because division by 0 is ndefined.
    
    else{
        int n=abs(num);

        for(int i=1;i<=n;i++){

            if(num%i==0){

                cout<<i<<endl;

            }
        }   
    }

    return 0;
}
