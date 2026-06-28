#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter string 1 : ";
    getline(cin,str1);
    cout<<"Enter string 2 : ";
    getline(cin,str2);
    if(str1.length()!=str2.length()){
        cout<<"No Rotation";
    }
    else{
        string temp=str1+str1;
        if(temp.find(str2)!=string::npos){
            cout<<"Rotation";
        }
        else{
            cout<<"No Rotation";
        }
    }
    return 0;
}