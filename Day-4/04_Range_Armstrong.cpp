#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,sum=0,temp=0,count=0;
    cout<<"Enter range limit to find the armstrong number between the range from 0 to limit : ";
    cin>>x;
    for(int i=0;i<=x;i++){
        sum=0;
        count=0;
        temp=i;
        while(temp!=0){
            count++;
            temp=temp/10;
        }
        temp=i;
        while(temp!=0){

            int a=temp%10;

            sum=sum+round(pow(a,count));

            temp=temp/10;

        }
    
        if(sum==i){
            cout<<i<<endl;
        }
        else{}
            
    }
    
    return 0;
}