//Find the first non-repeated character in a String
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i;
    int *c=new int[26];
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
        c[int(str[i])-97]++;
     for(i=0;i<str.size();i++){
         if(c[int(str[i])-97]==1){
            cout<<"num is: "<<str[i];
            break;
         }
     }   
}