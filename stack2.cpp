#include<iostream>
#include<stack> 
using namespace std;
int main(){
	stack<int>s1,s2;
	int choice,val,temp;
	do{
		cout<<"\n1.push\n2.display\n3.exit\n";
		cout<<"enter the operation";
		cin>>choice;
		switch(choice){
			case(1):
				cout<<"enter the number to push: ";
				cin>>val;
				if(s1.empty())
					s1.push(val); 
				else if (s1.top()>val)
					s1.push(val);
						
					else{
						while(!s1.empty()&&s1.top()<val){
							temp=s1.top();
							s2.push(temp);
							s1.pop();
						}
						s1.push(val);
						while(!s2.empty()){
							temp=s2.top();
							s1.push(temp);
							s2.pop();
						}	

					}
				
				
				break;
			
			case(2):
				cout<<"elements are: \n";
				while(!s1.empty()){
					cout<<s1.top()<<"\t";
					s1.pop();

				}
				break;	
			case(3):
				exit(1);	
		}
	}while(choice!=4);


}