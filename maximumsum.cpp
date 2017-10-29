//maximumsumgeeksforgeeks
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,no,num;
    vector<int>negarray;
    vector<int>posarray;
    vector<int>input;
    cout<<"enter testcases: ";
    cin>>n;
    int max_sum=0;
    for(int i=0;i<n;i++){
        cout<<"no of array ";
        cin>>no;
        cout<<"enter array: ";
        for(int j=0;j<no;j++){
            cin>>num;
            input.push_back(num);
            if(input[j]<=0)
                negarray.push_back(input[j]);
            else if(input[j]>0)
                posarray.push_back(input[j]);    
        }
        sort(negarray.begin(),negarray.end());
        sort(posarray.begin(),posarray.end());
        for(int j=0;j<=negarray.size()-1;j=j+2){
            if(j+1<=negarray.size()-1)
            
            max_sum+=(negarray[j]*negarray[j+1]);
            else
            max_sum+=negarray[j];

            
        }
        
        for(int j=posarray.size()-1;j>=0;j=j-2){
                if(j-1>=0)
            max_sum+=posarray[j]*posarray[j-1];
            else
            max_sum+=posarray[j];

        }
        
        cout<<"max sum is: "<<max_sum;
        
    }
}