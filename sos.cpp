#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string str;
	vector<int>v1={1,2,3};

	int count=0,i;
	cout<<"enter the string";
	cin>>str;
	string sos="SOS";
	
	for(i=0;i<str.size();i=i+3){
		cout<<"\nsubstring is :"<<str.substr(i,3);
		if(str.substr(i,3)!=sos){
			str.substr(i,3).substr(0,1)==
			count++;
			cout<<"\ncount is: "<<count;
		}
	}
	for(i=0;i<v1.size();i++)
		cout<<v1[i];

	cout<<"number of diff characters are: "<<count;	

}