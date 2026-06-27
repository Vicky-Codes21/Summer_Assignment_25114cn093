#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,New,reverse;
    cout<<"Enter any string : ";
    cin>>str;
    New=str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    for(int i=count-1;i>=0;i--){
        reverse+=str[i];
    }
    if(New==reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Pallindrome";
    }
    return 0;
}