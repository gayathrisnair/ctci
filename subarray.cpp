#include<iostream>
using namespace std;
class subarray{
public:
	int start,end;
};
void generatesubarray(int a[],int size,int k)
{
	int i,j;
	subarray obj[size];
	for(i=0;i<size;i++){
		obj[i].start=i;
		obj[i].end=i+(k-1);
	}
	for(i=0,j=obj[i].start;j<obj[i].end,i<size;i++,j++)
		cout<<a[j]<<"\t";
	cout<<"\n";
	cout<<"hjad";
}
int main(){
	int a[10],size,k,i;
	cout<<"enter the size of the array: ";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"enter the size of max sub array: ";
	cin>>k;
	
	generatesubarray(a,size,k);

	
}