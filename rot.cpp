//Given 2 integer arrays, determine of the 2nd array is a rotated version of the 1st array. Ex. Original Array A={1,2,3,5,6,7,8} Rotated Array B={5,6,7,8,1,2,3}
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int i,n;
    
    
    cout<<"enter n: ";
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];
    cout<<"enter elements is a..\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter elements in b...";
    for(i=0;i<n;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"not rotated version: ";
            break;
        }
            

    }
    if(i==n)
    cout<<"rotated version...";
}