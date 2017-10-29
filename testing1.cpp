#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"enter the string: ";
	cin>>str;
	int i;
	for(i=0;(i+3)<=str.size();i++){
		cout<<"\n"<<str.substr(i,3);
	}
}