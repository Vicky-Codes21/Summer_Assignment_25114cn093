#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,New,reverse;
    cout<<"Enter any string : ";
    getline(cin,str);

    int count=0;
    if(str[0]!=' '){
        count++;
    }
    for(int i=1;str[i]!='\0';i++){
        if(str[i]!=' '&&str[i-1]==' '){
            count++;
        }
    }
    cout<<"The number of words in the sentence is "<<count;
    return 0;
}