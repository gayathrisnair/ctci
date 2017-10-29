#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	int i,k;
	cout<<"enter the string: ";
	cin>>s1;
	s2="hackerrank";
	
	for(i=0,k=0;i<s1.size()&&k<=9;i++){
		if(s1[i]==s2[k])
			k++;
		

	}
	if(i<=s1.size()&& k<=9 )
		cout<<"no";
	else
		cout<<"yes";
}