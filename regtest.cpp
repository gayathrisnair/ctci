#include<iostream>
#include<bits/stdc++.h>
#include<regex>
using namespace std;
int main(){
    string str;
    cin>>str;
    regex passB("(B)[0-3]{3}[a-zA-Z]{2}[a-zA-Z0-9]{7}");
    if(regex_match(str,passB)){
        cout<<"sucess";    
    }
}