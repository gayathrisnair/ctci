#include<iostream>
#include<string>
using namespace std;
bool isvowel(string str){
	int flag=0,i;
	for(i=0;i<str.size();i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			flag=1;
		if(flag==0)
			return false;
	}
					
		
	return true;

}
void isbad(string str){
	int i,j,flag=0;
	string temp;
	for(i=0;(i+3)<=str.size();i++){
		if(!isvowel(str.substr(i,3))){
				cout<<"bad string: ";
				flag=1;
				break;
			}
		}	
		
	
	if(flag==0){
		for(i=0;(i+5)<=str.size();i++){
		
		if(isvowel(str.substr(i,5))){

			flag=1;
				cout<<"bad string..";
				break;
			}
			
		}	
	

	}
	if(flag==0)
				cout<<"good string..";	

}
int main(){
	string str;
	cout<<"enter the string: ";
	cin>>str;
	isbad(str);
}