#include<iostream>
using namespace std;
int main(){
	int t,b,l,r,k,i;//t=top,b=bottum,l=left,r=right
	int matrix[7][7];
	t=0,b=6,l=0,r=6;
	for(i=4;i<1,t<b,l<r;i--){
		for(k=l;k<=r;k++)
			matrix[t][k]=i;
		t++;
		for(k=t;k<=b;k++)
			matrix[k][r]=i;
		r--;
		for(k=r;k>=l;k--)
			matrix[b][k]=i;
		b--;
		for(k=b;k>=t;k--)
			matrix[k][l]=i;
		l++;
	}
	if(i==1)
		matrix[t][l]=1;
	
	for(i=0;i<7;i++){
		for(k=0;k<7;k++){
			cout<<matrix[i][k]<<"\t";
		}
		cout<<"\n";
	}


}