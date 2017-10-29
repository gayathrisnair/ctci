#include<iostream>
#include<array>

#include<vector>
using namespace std;

class stack{
public:
	int capacity,size=0,top=-1;
	int st[3];
	int pushst(int val){
		if(size<capacity){
		st[++top]=val;
		size=size+1;
		cout<<"size after pushing is: "<<size;
		
		return 1;
	}
	else 
		return -1;

	}
	stack(int cap,int val){
		capacity=cap;
		st[0]=val;
		top
		size++;
		

	}
	stack(int cap){
		capacity=cap;
		
	}
	stack(){
		capacity=0;
	}
	void display(){
		int i;
		cout<<"\n now the size is: "<<size;
		for(i=0;i<size;i++)
		cout<<"elements are: "<<st[i]<<"\t";
	}



};

vector<stack> arr;
void add (stack obj){
	arr[arr.size()]=obj;
}
	
stack getlaststack(){
	
	return arr.at(arr.size()-1);
}
void pushs(int val){
		stack last,first(3,val);
		int a=0;
		
			
		if(arr.empty()){
			cout<<"case1 entering 1st element:\n";
			arr.push_back(first);
			
			first.display();
			
		}
		

		else{
			cout<<"case2 entering another element\n";
			last=getlaststack();
			 last.display();


			cout<<"\ncapacityof obj returnedis: "<<last.capacity<<"\n size of obj returned is: "<<last.size;

			

		
			  a=last.pushst(val);
			  
			  cout<<"\ncapacityis: "<<last.capacity<<"\n size is: "<<last.size;
			  last.display();
		}
	
		if(a==-1){
		cout<<"case3 entering into anew stack";
		
		stack obj(7);
		obj.pushst(val);
		add(obj);
	}

		
		

		

	}
int main(){
	int val,op;
	do{
		cout<<"\n1.push\n2.exit\n";
		cout<<"enter the operation: ";
		cin>>op;
		switch(op){
		case(1):	
			cout<<"enter the element to push: ";
			cin>>val;
			pushs(val);
			break;
		case(2):
			exit(1);	
	}	
	
	}while(op!=2);
}




		
