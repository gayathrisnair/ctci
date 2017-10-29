//check if one string is a permutation of other

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int *count(string str){
    int *a=new int[26];
    int i;
    for(i=0;i<str.size();i++){
        a[str[i]-97]=a[str[i]-97]+1;
        }
        return a;
}
int check(int *a,string str){
    int i;
    for(i=0;i<str.size();i++){
        if(a[str[i]-97]==0)
            return 0;

    }
    return 1;

}
int main(){
    string str1,str2;
    int x;
    int *y;
    string::iterator i,j;
    cout<<"enter the 2 strings: ";
    cin>>str1>>str2;
    y=count(str2);
    x=check(y,str1);
    cout<<x;
}
