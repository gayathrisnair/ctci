//Write fibbonaci iteratively and recursively 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,first,second,third;
    cout<<"enter n: ";
    cin>>n;
    first=0;
    second=1;
    cout<<first<<" "<<second<<" ";
    for(i=0;i<n;i++){
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }

}