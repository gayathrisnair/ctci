#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	int c[26],i;
	cout<<"enter the string: ";
	cin>>str;
	for(i=0;i<str.size();i++)
		cout<<str[i]-'A'<<"\n";
	


}