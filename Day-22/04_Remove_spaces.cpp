#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string newstr="";
    cout<<"Enter any string : ";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            newstr+=str[i];
        }
    }
    cout<<"String without spaces : "<<newstr;
    return 0;
}