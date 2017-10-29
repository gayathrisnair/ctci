#include<iostream>
using namespace std;

void prime(int j,int *a){
   
    
int i,k;
a[0]=1;
a[1]=1;
    
    for(i=2;i<j;i++)
       for(k=2;i*k<j;k++){
           a[i*k]=1;
       }
     
}
int palindrom(int num){
    int i=num;
    int rev=0;
    while(i!=0){
        rev=rev*10+(i%10);
        i=i/10;
    }
    if(num==rev)
    return 1;
    else 
    return -1;


}
int main(){
    int i,j;
   
    cout<<"enter the range: ";
    cin>>j;
    int *a=new int[j+1];
    prime(j,a);
    
    for(i=0;i<j;i++){
        if(a[i]==0)
            if(palindrom(i)==1)
                cout<<"the prime palindrome is : "<<i;
      

}

}