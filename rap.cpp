#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[5],i,num,flag=0;
    cout<<"enter the numbers: ";
    for(i=0;i<5;i++)
        cin>>ar[i];
    cout<<"enter the last number: ";
    cin>>num;
    for(i=0;i<5;i++)
        if(ar[i]==num){
            flag=1;
            cout<<"number present in first 5";
            break;
        }
    if(flag==0) {
        cout<<"not found";
    }   


        
}