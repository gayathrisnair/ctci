#include<iostream>
using namespace std;

int main(){
    int i,j,k,n,l,temp;
    l=1;
    cout<<"enter n: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<(n-i);j++){
            cout<<" ";

        }
        
            for(k=1;k<=(l/2+1);k++)
                cout<<k+i;
                temp=k+i-1;
                for(;k<=l;k++){
                    temp=temp-1;
                    cout<<temp;
                    
                }
                    
                

       
        if(l+2<=)
        l=l+2;
        cout<<"\n";

    }
}