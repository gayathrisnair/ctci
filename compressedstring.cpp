#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2,str;
	string::iterator i,j;
	int count=1;
	cout<<"enter the string: ";
	cin>>s1;
	
	for(i=s1.begin();i!=s1.end();i+=count){
		
		s2+=*i;
		count=1;
		j=i+1;
		while(*i==*j){
			count++;
			j++;
		}
		s2+=to_string(count);
		

	}
	s1.length()<s2.length()?str=s1:str=s2;
	cout<<"string is: "<<str;

}