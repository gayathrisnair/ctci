#include<iostream>
using namespace std;
int main(){
	int N,i,j,sum=0,flag=0;
	cout<<"enter the number: ";
	cin>>N;
	for(i=2;i<=N;i++){
		if(N%i==0){
			for(j=2;j<=i;j++){
				if(i%j==0&&i!=j){
					flag=1;
					break;
				}
			}
			if(flag==0)
				sum+=i;

		}
	}
	cout<<"sum is: "<<sum;

}