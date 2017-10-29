#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;

};
class linkedlist {
	Node *head=NULL;
public:
	void display(Node *head){ 
		Node *temp=head;
		cout<<"the elements are: ";
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
	}
	void insertfirst(int val){
	
		Node *temp= new Node;
		temp->data=val;


		if (head==NULL){
			cout<<"\ninserting first element...";
			head=temp;
		}
		else{
			cout<<"\nentering other elements...";
			temp->next=head;
			head=temp;
		
		}
	}
	Node* gethead(){
		return head;
	}
};
Node *reverselist(Node *head){
	cout<<"\nat reverse..";
	Node *prev,*curr,*next;
	
	for(prev=head,curr=prev->next,next=curr->next;curr!=NULL;){
		cout<<"\n in the loop..";
		curr->next=prev;
		prev->next=NULL;
		head=curr;

		
		prev=curr;
		curr=next;
		if(next!=NULL)
			next=next->next; 
		

		cout<<"\n head now is:"<<head->data;

	}
	return head;

}
int main(){
	int op,val;
	linkedlist obj;

	do{
		cout<<"\n1.enter data elements into the linked list\n2.reverse\n3.display\n4.exit";
		cout<<"\nenter the option";
		cin>>op;
		switch(op){
			case(1):
				cout<<"enter the element to insert";
				cin>>val;
				obj.insertfirst(val);
				break;
			case(2):
				obj.display(reverselist(obj.gethead()));	

				break;
			case(3):
				obj.display(obj.gethead());
				break;	
			case(4):
				break;

		}	

	}while(op!=4);
	
}