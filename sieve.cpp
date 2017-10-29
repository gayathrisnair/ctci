#include<iostream>
using namespace std;
int main(){
	int num,i,j;
	
	cout<<"enter the number till where you want to find prime numbers: ";
	cin>>num;
	int *a=new int[num];
	for(i=0;i<num;i++)
		a[i]=1;
	a[0]=0;
	a[1]=0;
	for(i=2;i<num;i++){
		
		for(j=2;i*j<num;j++)
			//if (a[i]==1)
				a[i*j]=0;
			
	}	
	cout<<"The prime numbers are: ";
	for(i=0;i<num;i++){
			if (a[i]==1)
			cout<<i<<"\t";

	}	
	



}