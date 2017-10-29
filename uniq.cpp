//Check if a String is composed of all unique characters
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    int *c=new int[26];
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
        c[int(str[i])-97]++;
    for(i=0;i<str.size();i++)
        if(c[int(str[i])-97]!=1){

            cout<<"not unique: ";
            break;
        }
        if(i==str.size())
            cout<<"unique..";     
}
