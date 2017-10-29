#include<iostream>
#include<vector>
using namespace std;
int * sort(int arr[],int size){
	int hole,value,i;
	for(i=1;i<size;i++){
		hole=i;
		value=arr[i];
		while(hole>0 && arr[hole-1]>value){
			arr[hole]=arr[hole-1];
			hole=hole-1;
		}
		arr[hole]=value;
	}

		cout<<"\nsorted array is: ";
		for(i=0;i<size;i++)
		cout<<arr[i];
	for(i=0;i<size-1;i++){
		
		
		if(arr[i]-arr[i+1]==0)
			

			cout<<"\n Repeating is: "<<arr[i];
		  if(arr[i+1]-arr[i]==2 )
			cout<<"\nmissing is: "<<arr[i]+1;

	}
}
int main(){
	int i,size;
	cout<<"enter the size of the array";
	cin>>size;
	int *arr=new int[size];
	cout<<"enter the array";
	for(i=0;i<size;i++)
		cin>>arr[i];
	sort(arr,size);
	


}