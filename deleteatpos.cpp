#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;

};
class linkedlist {
private:
	Node *head=NULL;
public:
	void display(){ 
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
	int getsize(){
		Node *ptr=head;
		int size=0;
		while(ptr!=NULL){
			size++;
			ptr=ptr->next;
		}	
		return size;
	}
	Node* gethead(){
		return head;
	}
};	
void Delete(Node*head,int position){
	cout<<"\nin delete...";
	int pos=1;
	Node *ptr=head;
	Node *temp;
	while(ptr!=NULL&&pos<position-1){
		pos++;
		ptr=ptr->next;
	}
	if(pos==position-1){
		cout<<"\nat pos...";
		temp=ptr->next;
		ptr->next=ptr->next->next;
		temp->next=NULL;
	}
}
int main(){
	int position,op,val;
	linkedlist obj;

	do{
		cout<<"\n1.enter data elements into the linked list\n2.display\n3.exit";
		cout<<"\nenter the option";
		cin>>op;
		switch(op){
			case(1):
				cout<<"enter the element to insert";
				cin>>val;
				obj.insertfirst(val);
				break;
			case(2):
				obj.display();
				break;	
			case(3):
				break;

		}	

	}while(op!=3);
	cout<<"enter the position to Delete : ";
	cin>>position;
	if(obj.getsize()<position)
		cout<<"unable to Delete";
	else
		Delete(obj.gethead(),position);
	obj.display();
}