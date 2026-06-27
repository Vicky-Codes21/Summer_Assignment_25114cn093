#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    char character;
    cout<<"Enter any string : ";
    getline(cin,str);
    cout<<"Enter the character to find it's frequency : ";
    cin>>character;
    int freq=0;
    for(int i=0;str[i]!='\0';i++){
        if(character==str[i]){
            freq++;
        }
    }
    cout<<"Frequency is "<<freq;
    return 0;
}