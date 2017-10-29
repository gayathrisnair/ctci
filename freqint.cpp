//Find the most frequent integer in an array
#include<iostream>
#include<map>
using namespace std;
int main(){
    int i,n,max,num,k=2;

    cout<<"enter n: ";
    cin>>n;
    int *a=new int[n];
    int *c=new int[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    for(i=0;i<n;i++){
        c[(a[i]+k)%n]=c[(a[i]+k)%n]+1;
            
        }
       
max=0;
for(i=0;i<n;i++){
    if(c[i]>max){
        num=i;
        max=c[i];
    }


}
for(i=0;i<n;i++)
    if(a[i]%n==num){
    cout<<"frequent num is: "<<a[i];
    break;
    }
                
    
}

