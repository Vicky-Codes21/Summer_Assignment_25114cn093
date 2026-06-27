#include<iostream>
#include<string>
using namespace std;
int main (){
    string str1,str2;
    cout<<"Enter string 1 : ";
    cin>>str1;
    cout<<"Enter string 2 : ";
    cin>>str2;
    if(str1.length()!=str2.length()){
        cout<<"Not Anagram";
    }
    else{
        bool Anagram=true;
        for(int i=0;str1[i]!='\0';i++){
            int count1=0;
            int count2=0;
            for(int j=0;str1[j]!='\0';j++){
                if(str1[i]==str1[j]){
                    count1++;
                }
            }
            
            for(int j=0;str2[j]!='\0';j++){
                if(str1[i]==str2[j]){
                    count2++;
                }
            }
            if(count1!=count2){
                Anagram=false;
                break;
            }
        }
        if(Anagram){
            cout<<"Anagram String";
        }
        else{
            cout<<"Not Anagram String";
        }
    }        
    return 0;
}