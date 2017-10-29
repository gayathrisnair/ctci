//Check if String is a palindrome
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0,j=str.size()-1;
    for(;i<=j;i++,j--)
        if(str[i]!=str[j]){
            cout<<"not palindrome..";
            break;
        }
    if(i>j)  
    cout<<"palindrome..";      
}