#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int i,num,g=0,r=0;
    
    cout<<"enter the number of test cases: ";
    cin>>num;
    while(num>0){
        int N;
        cout<<"enter N: ";
        cin>>N;
        char *str= new char[N];
        cout<<"enter the string: ";
        cin>>str;
        for(i=0;i<N;i++)
            if(str[i]=='R')
                r++;
            else
                g++; 
        num--;
    }
    if(g<r)
    cout<<g;
    else
    cout<<r;

}
