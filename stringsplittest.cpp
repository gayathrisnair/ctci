#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<string>input;
    stringstream ss(str);
    while( ss.good() )
    {
        string substr;
        getline( ss, substr, ',' );
        input.push_back( substr );
    }
    for(int i=0;i<input.size();i++){
        cout<<input[i]<<" ";
    }
}