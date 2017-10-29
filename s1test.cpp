#include<iostream>
#include<stack>
#include<iterator>
#include<vector>
using namespace std;

class Stack{
private:
	int capacity;
	stack<int> st;
public:
	int pushst(int val){
		st.push(val);
	}
	
	Stack(int cap){
		capacity=cap;
	}
	
	void display(){
		
		while(!st.empty()){
			cout<<"\nelements are: "<<st.top()<<"\t";
			st.pop();
		}
	}
	int getcapacity(){
		return capacity;
	}
	stack<int> getst(){
		return st;
	}
};

vector<Stack> arr;
vector<Stack>::iterator i;
void pushs(int val){
		
		int cap;
		if(arr.empty()){
			cout<<"case1 entering 1st element in 1st stack..\n";
			cout<<"enter the capacity of the 1st stack: ";
			cin>>cap;
			Stack first(cap);
			arr.push_back(first);
			arr[0].pushst(val);
		}
			
		else {
			Stack last=arr.at(arr.size()-1);
			stack<int> temp=last.getst();
			if(temp.size()<last.getcapacity()){
			cout<<"case 2:entering element to the same stack.."	;
			last.pushst(val);
			arr[arr.size()-1]=(last);
			}	
			else{
			cout<<"creating a new stack..";
			cout<<"enter the capacity of the new stack";
			cin>>cap;
			Stack obj(cap);
			arr.push_back(obj);
			arr[arr.size()-1].pushst(val);


		}
	}	
			
}
	int main(){
	int val,op;
	do{
		cout<<"\n1.push\n2.display\n3.exit\n";
		cout<<"enter the operation: ";
		cin>>op;
		switch(op){
		case(1):	
			cout<<"enter the element to push: ";
			cin>>val;
			pushs(val);
			break;
		case(2):
			for(Stack a:arr)
			a.display();
			break;
		case(3):
			exit(1);	
		}	
	
	}while(op!=2);
}




		
