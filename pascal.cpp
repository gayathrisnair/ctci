#include<iostream>
using namespace std;
int fact(int i){
    int j,ans=1;
    
    for(j=1;j<=i;j++){
        ans=ans*j;
    }
   
    return ans;
}
int main(){
    int n,i,j,k;
    cout<<"enter number of rows: ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
            cout<<" ";  

        for(k=0;k<=i;k++) {
            cout<<fact(i)/(fact(k)*fact(i-k))<<" ";
        }
        cout<<"\n";    


    }
}