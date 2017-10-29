#include<iostream>
using namespace std;
int maxsubarray(int a[],int size,int k){
	int sum,max,i;
	for(i=0;i<k;i++)
		sum+=a[i];
	max=sum;
	for(i=k;i<size;i++){
		sum+=a[i]-a[i-k];//sliding window
		if(sum>max)
			max=sum;
	}
	return max;

}
int main(){
	int max,size,k,i,a[10];
	cout<<"enter the size of the array: ";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"enter the size of max sub array: ";
	cin>>k;
	max=maxsubarray(a,size,k);
	cout<<"the max sub array of size "<<k<<"is: "<<max;
}