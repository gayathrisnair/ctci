#include<iostream>
using namespace std; 
int main(){
    int n;
    int *a=new int[n];
    int i,j,k,sum,x,y;
    
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        sum=0;
        if((i-1)<0)
            x=-1;
       else {
            for(j=(i-1);j>=0;j--){
                if(a[j]>a[i]){
                 x=j+1;
                 break;
            }
            if(j==0)
            x=-1;
        }
    }
    if((i+1)>=n)
        y=-1;
     else{
        for(k=(i+1);k<n;k++){
            if(a[k]>a[i]){
        
                y=k+1;
                break;
            }

        }
        if(k==n)
            y=-1;
        }
            sum=x+y;
            cout<<sum<<" ";
    }    


}