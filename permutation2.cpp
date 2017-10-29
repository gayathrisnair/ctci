#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void permute(string str,string sub){
    int i;
    if(str.size()==0){
        cout<<sub<<"\t";
        return;
    }
    
     
        for(i=0;i<str.length();i++){
            permute(str.substr(1),sub + str[0]);

            rotate(str.begin(),str.begin()+1,str.end());
        } 
        
}
int main(){
    string str,result;
    cout<<"enter the string: ";
    cin>>str;
    permute(str,"");
}