#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[4][7];
    int i,k,j;
    int space=3,num=1,var=1;
    
    for(i=1;i<=4;i++,space--,num=num+2){
        for(j=space;j>=0;j--)
            cout<<" ";
        for(k=1;k<=num;k++){    
            cout<<var;
            var++;
        }
        cout<<"\n";    
    }
        space=1;
        num=5;
    for(i=1;i<=4;i++,space++,num=num-2){
        for(j=1;j<=space;j++)
            cout<<" ";
        for(k=num;k>0;k--){    
            cout<<var;
            var++;
        }
        cout<<"\n";    
    }

    
}