#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    char character;
    cout<<"Enter any string : ";
    getline(cin,str);
    bool found=false;
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                cout<<"First repeating character = "<<str[i];
                found=true;
                break;
            }
        }
        if(found) {
            break;
        }
    }
    if(!found){
        cout<<"No character";
    }
    return 0;
}