//findafactby bfact geeksforgeeks
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    return fact;    
}
int main(){
    int A,B,i,temp=1;
    cin>>A>>B;
    cout<<B-A;
    for(i=0;i<2;i++){
        cout<<"here";
        temp*=B;
        cout<<B<<" ";
        B--;
    }
    for(i=0;i<(B-A);i++)
        cout<<"her";
    
    cout<<"\n"<<temp%10;
}