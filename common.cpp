//Find the common elements of 2 int arrays
#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter m: ";
    cin>>m;
    int *a=new int[n];
    int *b=new int[n];
    cout<<"enter elements of a..";

    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter elements of b..";
    for(i=0;i<n;i++)
        cin>>b[i]; 
   
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(b[j]==a[i]){
                cout<<"common elements: "<<a[i];
            }
        }
    }
           
}