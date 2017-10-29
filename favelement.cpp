#include<iostream>
using namespace std;
int main(){
	int a,b,c,si;
	cout<<"enter a ,b and c: ";
	cin>>a>>b>>c;
	si=a;
	while(si!=b && si<b){
		si+=c;

	}
	if(si>b)
		cout<<"fav element not found";
	else if(si==b)
	cout<<"fav element present";	

}