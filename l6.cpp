#include<iostream>
#include<cstdlib>
#include<forward_list>
#include<string>
#include<iterator>
#include<stack>
using namespace std;
int main(){
	string s;
	int len=0,j;
	int flag=0;
	string::iterator i;
	forward_list<char> l;
	forward_list<char>::iterator ptr;
	stack<char> st;
	
	
	cout<<"enter the string: ";
	cin>>s;
	
	for(i=--s.end();i!=--s.begin();i--){
		len++;
		l.push_front(*i);
	}
	cout<<len;

	for(ptr=l.begin();ptr!=l.end();ptr++)
		cout<<"\n"<<*ptr;
	
	
	for(ptr=l.begin(),j=0;j<len/2;ptr++,j++){
		st.push(*ptr);
			
			
	}
		
	if(len%2!=0)
		ptr++;
			
	while(!st.empty() && ptr!=l.end()){
		if(st.top() == *ptr)
			flag=1;
				
			
		else {
			cout<<"not palindrome";	
			break;
			}
			st.pop();
			ptr++;
		}
		
			
			
		
		
		if (flag==1)
			cout<<"palindrome";
		
		
	
	
	
	
	



	
}