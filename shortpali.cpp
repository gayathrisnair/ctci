//Find the shortest palindrome in a String
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str2;
    cin>>str;
    int l,k,i=0,j=str.size()-1;
    for(;i<=j;i++){
        if(str[i]!=str[j]){
            for(k=0,l=i+1;k<(j-i);k++,l++){
                
                str2.push_back(str[l]);
                cout<<str2[k]<<"\n";
            }
            break;    
            
        
    
        }
    }
    
        str2.append(str);
        cout<<"shortest palindrom is: "<<str2;


}