#include<iostream>
#include<string>
using namespace std;
int main(){
	int size,i;
	cout<<"enter size: ";
	cin>>size;
	string str[size];
	for(i=0;i<size;i++){
		cin>>str[i];
	}
	for(i=0;i<size;i++)
		cout<<str[i]<<"\n";

}