#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=4,num=3;

    for(i=2;i<=4;i++,num--){
        k=num;
        for(j=1;j<=i;j++){
            cout<<n;
            n--;
        }
    for(;k>=0;k--)
        cout<<n;
        
        for(j=1;j<=i;j++){
            cout<<n;
            n++;
        }   
        cout<<"\n"; 

    }
}