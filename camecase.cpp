#include<iostream>
#include<string>

using namespace std;
int main(){
	string str;
	string::iterator i;
	int num=1,temp;
	cout<<"enter the string: ";
	cin>>str;
	for(i=str.begin();i!=str.end();i++){
		
		
		if(65<=int(*i)&& int(*i)<=90){

			num++;
			
		}
	}

		
	cout<<"the number of words is: "<<num;	
}