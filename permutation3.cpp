#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(string str){
    do{
        cout<<str<<"\t";
    }while(next_permutation(str.begin(),str.end()));
}
int main(){
    string str,result;
    cout<<"enter the string: ";
    cin>>str;
    sort(str.begin(),str.end());
    permute(str);
    
}