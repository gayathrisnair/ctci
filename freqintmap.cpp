//Find the most frequent integer in an array
#include<iostream>
using namespace std;
#include<map>
#include<iterator>
int main(){
    int i,n,j;
    map<int,int> mp;
    map<int,int>:: iterator  itr;
    cout<<"enter n: ";
    cin>>n;
    int *a=new int[n];
    for(j=0;j<n;j++)
        cin>>a[j];
    for(i=0;i<n;i++){
       itr=mp.find(a[i]);
       if(itr==mp.end())
        mp.insert(pair<int,int>(a[i],1));
       else
       mp[a[i]]=mp[a[i]]+1;
    } 
    int num,max=0;
    for (itr = mp.begin(); itr != mp.end(); ++itr)
    {
        if(itr->second>max){
            max=itr->second;
            num=itr->first;
            
        }
        
    }    
    cout<<"frequent num is: "<<num;
    
}