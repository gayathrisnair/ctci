#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	string ::iterator i,top;
	cout<<"enter the string: ";
	cin>>str;
	top=str.begin();
	for(i=str.begin();i!=str.end();)
		if(*i==*(i+1)){

			*i='*';
			*(i+1)='*';
			i=i+2;
		}
		else
			i=i+1;
	cout<<"string is:";
	for(i=str.begin();i!=str.end();i++){
		if(*i!='*')
			cout<<*i;
	}




}