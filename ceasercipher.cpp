#include<iostream>
using namespace std;
int main(){
	int size,i,k;
	cout<<"enter the size of the string: ";
	cin>>size;
	char *str=new char[size];
	cout<<"enter the string";
	cin>>str;
	cout<<"enter value of : ";
	cin>>k;
	for(i=0;i<size;i++)
		if(97<=int(str[i]) && int(str[i]<=122))
			str[i]=int(str[i])+k;
	cout<<str;	
	}	