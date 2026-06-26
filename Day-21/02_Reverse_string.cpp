#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    for(int i=count-1;i>=0;i--){
        cout<<str[i];
    }
    return 0 ;
}