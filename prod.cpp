#include<iostream>
using namespace std;
int main(){
	int size,i,j;
	cout<<"enter the size";
	cin>>size;
	int *arr=new int[size];
	for(i=0;i<size;i++)
		cin>>arr[i];
	for(i=0;i<size;i++){
		arr[i]=1;
		for(j=0;j<size;j++){
			
			cout<<"i is"<<i<<"\t"<<"j is"<<j<<"\t";
			if(i!=j){
				cout<<"arr[i] is: "<<arr[i]<<"\t";
				cout<<"arr[j] is: "<<arr[j]<<"\t";

				arr[i]=arr[i]*(arr[j]);
				cout<<"\t"<<arr[i];
			}
		}
		cout<<"\n";	
	}
	cout<<"array is :";
	for(i=0;i<size;i++)
		cout<<arr[i]<<"\n";
			
	
}