//Write fibbonaci iteratively and recursively 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    return (fib(n-1)+fib(n-2));
    
}
int main(){
    int n,i,first,second,third;
    cout<<"enter n: ";
    cin>>n;
    for(i=0;i<n;i++)
        cout<<fib(i);
    return 0;    
}