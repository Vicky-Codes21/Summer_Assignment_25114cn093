#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter string 1 : ";
    cin>>str1;
    cout<<"Enter string 2 : ";
    cin>>str2;
    bool found[256]={false};
    for(char ch : str2){
        found[ch]=true;
    }bool printed[256]={false};
    cout<<"Common Characters : ";
    for(char ch:str1){
        if(found[ch]&&!printed[ch]){
            cout<<ch<<" ";
            printed[ch=true]; 
        }
    }
    return 0;
}