#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int>::iterator i;
    i=v.begin();
    int j;
  
    for(j=0;j<5;j++){
       v.push_back(1);
        cout<<v[j];
    }
    i=v.insert(i+2,2);
    
    
}