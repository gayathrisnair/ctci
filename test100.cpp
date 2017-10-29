#include <iostream>
using namespace std;
int main()
{
    int N,i,j,k;
    cin>>N;
    int *arr=new int[N];
    
    for(i=0;i<N;i++)
        cin>>arr[i];
    
    int *arr1=new int[N];    

   for(i=0;i<N;i++){
       for(j=N-1;j>i;j--){
            if(arr[j]>arr[i])
                break;
               
       } 
       if(j<=i)
       j=-1; 
       cout<<j;      
        for(k=i+1;k<N;k++){
            if(arr[k]>arr[i])
                break;  
             
        }   
        if(k>=N) 
            k=-1;

        cout<<k;    
        
        arr1[i]=j+k;        
                
        
    } 
    for(i=0;i<N;i++)
        cout<<"\n"<<arr1[i]<<"\t";
        
    return 0;
}
    
    