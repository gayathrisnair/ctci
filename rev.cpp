//Reverse a String iteratively and recursively
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    string str;
    cin>>str;
    int i=0,j=str.size()-1;
    for(;i<=j;i++,j--){
        
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<"rev is : "<<str;

}