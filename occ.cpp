//Find the only element in an array that only occurs once.
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    
    cout<<"enter n: ";
    cin>>n;
    int *a=new int[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j]&& i!=j)
                break;
        }
        
        if(j==n){
            cout<<a[i]<<"occurs once..";
            break; 
        }   
                
    }
}