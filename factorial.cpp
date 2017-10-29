#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i,fact=1;
    cout<<"enter the number: ";
    cin>>num;
    for(i=num;i>=1;i--){
        fact*=i;
    }
    cout<<"factorial is :"<<fact;
}