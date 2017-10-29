#include<iostream>
#include<cstdlib>
#include<list>
#include<string>
#include<iterator>
using namespace std;
int main(){
	string s;
	string::iterator i;
	list<char> l;
	list<char>::iterator it,slow,fast;
	
	cout<<"enter the string";
	cin>>s;
	for(i=s.begin();i!=s.end();++i) 
		l.push_back(*i);
	cout<<"elements are\n";

	for(it=l.begin();it!=l.end();++it){
		cout<<"\n"<<*it<<"\n";
		
	}
	
	slow=l.begin();
	fast=l.begin();
	
	while(fast!=l.end()){
		slow=slow++;
		std::advance (fast,2);
	}
	cout<<"slow and fast are"<<*slow<<*fast;
	
	
	



	
}