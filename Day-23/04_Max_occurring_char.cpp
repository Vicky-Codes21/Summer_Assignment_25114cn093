#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter any string : ";
    getline(cin,str);
    int maxfreq=0;
    char maxchar;
    for(int i=0;str[i]!='\0';i++){
        int count=0;
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            maxchar=str[i];
        }
    }
    cout<<"Maxium occuring character = "<<maxchar<<endl;
    cout<<"Frequency = "<<maxfreq;
    return 0;
}    