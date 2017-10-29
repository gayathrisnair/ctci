#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,p,num,m,count;
   int sum;
    cout<<"enter the size: ";
    cin>>n;
    int *a=new int[n];
    cout<<"enter the array: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter the  no of queries:";
    cin>>num;
    for(m=0;m<num;m++){
         count=0;

   
     cin>>j>>k;
     for(i=j;i<=k;i++){
        sum=0;
        

         for(p=0;p<n;p++){
            if(p!=i)
                sum=sum+a[p];
         }       
         if(sum%2==0&&sum%3==0&&sum%5==0) 
           count++; 
           


     }
     cout<<"the count is: "<<count;
    }


}