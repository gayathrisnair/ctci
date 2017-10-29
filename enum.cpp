#include<iostream>
#include<bits/stdc++.h>
using namespace std;
enum  product{IPOD,IPHONE}ob;
product getstringoutput(string str, product ob){
        if("IPOD"==str)
            return IPOD;
        else if("IPHONE"==str)
            return IPHONE;
    }

int main(){
    product ob;
    string v1;
    cin>>v1;
    
    cout<<getstringoutput(v1, ob);
    


}