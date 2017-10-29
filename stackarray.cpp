#include<iostream>
#include<stack> 
using namespace std;
int main(){
	stack<int>s1,s2;
	int choice,val,temp;
	do{
		cout<<"\n1.push\n2.pop\n3.display\n4.exit\n";
		cout<<"enter the operation";
		cin>>choice;
		switch(choice){
			case(1):
				cout<<"enter the number to push: ";
				cin>>val;
				if(s1.empty()){
					while(!s2.empty()){
					temp=s2.top();
					s1.push(temp);
					s2.pop();
					}	

				} 
				s1.push(val);
				break;
			case(2):
				cout<<"pushing into the 2nd stack..";
				while(!s1.empty()){
					temp=s1.top();
					s2.push(temp);
					s1.pop();

				}	
				s2.pop();
				break;	
			case(3):
				cout<<"elements are: \n";
				while(!s1.empty()){
					cout<<s1.top()<<"\t";
					s1.pop();

				}
				break;	
			case(4):
				exit(1);	
		}
	}while(choice!=4);


}