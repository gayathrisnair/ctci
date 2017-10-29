#include<iostream>
#include<string>
using namespace std;
int permutation(string str1,string str2){
	int i;
	int *c=new int[26];
	if(str1.length()!=str2.length())
		return -1;
	for(i=0;i<str1.length();i++){
		c[(str1[i])-97]++;
		c[(str2[i])-97]--;

	}
	for(i=0;i<26;i++){
		if(c[i]!=0){

			return -1;
		}


	}
	return 1;
}
int main(){
	string str1,str2;
	cout<<"enter the two strings: ";
	cin>>str1>>str2;
	if(permutation(str1,str2)==1)
		cout<<"it is permutation of each other..";
	else
		cout<<"it is not a permutation of each other..";


	
	
}