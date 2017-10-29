#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int *a=new int[26];
    int i,j;
    cout<<"enter the  string: ";
    cin>>str;
    for(i=0;i<str.length();i++){
        a[int(str[i])-97]= a[int(str[i])-97]+1;
    }
     for(i=0;i<str.length();i++){
         if(a[int(str[i])-97]!=-1)
            cout<<"occurence of "<<str[i]<<" is: "<<a[int(str[i])-97]<<"\t";
         a[int(str[i])-97]=-1;

     }
    }     


