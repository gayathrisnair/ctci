//saveyourlifegeeksforgeeks
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void password(string str,map<char,int>changechar){
    int start,end,l=0,max=0,sumsofar=0;
    for(int i=0;i<str.size();i++){
        if(changechar.find(str[i])==changechar.end()){
            sumsofar+=str[i];
            
        }
           else{
               
        
            sumsofar+= changechar[str[i]];
            
           }
        if(sumsofar>max){
            max=sumsofar;
            end=i;
            start=l;

            
        }
        else if(sumsofar<0){
            sumsofar=0;
            l=i+1;   
        } 
    }
    
    cout<<"password is: "<<str.substr(start,end-start+1);
}
int main(){
    int n,changeno;
    string str;
    char b[20];
    int c[20];
    map<char,int>changechar;
    cout<<"enter no of test cases: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter string: ";
        cin>>str;
        cout<<"enter change no: ";
        cin>>changeno;
        cout<<"enter change char ";
        for(int j=0;j<changeno;j++)
            cin>>b[j];
        cout<<"enter change value: ";
        for(int k=0;k<changeno;k++)
            cin>>c[k];
        for(int j=0;j<changeno;j++)
            changechar.insert(pair<char,int>(b[j],c[j]));  
          password(str,changechar);  
            
        
    }

}