#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int data;
	struct node * next;
};
class linkedlist{
public:
	node *head;
	linkedlist(){
	head=NULL;
}
	node *createnode(){
	node *temp = new node;
			
			temp->next=NULL;
			cout<<"enter the element";
			cin>>temp->data;
			return temp;

}			
void insert(){
	node *temp;
	temp=createnode();
	if (head==NULL)
		head=temp;
	else{
		temp->next=head;
		head=temp;
	}
			

}
void display()
{
	node *ptr=head;
	while(ptr!=NULL){
	cout<<"\nelements are"<<ptr->data;
	ptr=ptr->next;
	}	
}
};
int main(){
	int svar;
	node *temp;
	linkedlist obj;
	while(1){
	cout<<"\n1.create new node\n 2. insert node at begining\n 3. display the linkedlist\n ";
	cout<<"\nenter the op\n";
	cin>>svar;

	switch(svar){
		case(1):
			temp=obj.createnode();
			cout<<"\nthe node is"<<temp->data;
			break;
		case(2):
			obj.insert();
			cout<<"\nelement inserted";
			break;
		case(3):
		    obj.display();
		    break;	
		case (10):
			exit(1) ;   

						}
					}
				}
				
