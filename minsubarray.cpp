#include<iostream>
using namespace std;
int minsubarray(int a[],int size){
	int sumsofar=0,min=0,i;
	for(i=0;i<size;i++){
		sumsofar+=a[i];
		if(sumsofar<min)
			min=sumsofar;
		else if(sumsofar>min)
			sumsofar=0;	
	}
	return min;
}
int main(){
	int size,i,a[10],minsum;
	cout<<"enter the size of the array: ";
	cin>>size;
	for(i=0;i<size;i++)
		cin>>a[i];
	minsum=minsubarray(a,size);
	cout<<"sum of min subarray is: "<<minsum;

}