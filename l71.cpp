#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
struct node{
	int data;
	node * next;
};
class linkedlist{
	public:
		
		node *head;
		linkedlist(){
		head=NULL;
		
}
node *createnode(int val){
	node *temp=new node;
	temp->data=val;
	temp->next=NULL;
	return temp;

}

	

	

			
void insertfirst(int val){
	
	node *temp=createnode(val);

	if (head==NULL){

		head=temp;
		
		
	}

	else{

		temp->next=head;
		
		head=temp;
		
	}
	
			

}
void display()
{
	node *ptr=head;
	cout<<"\nelements are: ";
	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	} 	
}
void insertlast(int val){
	node *temp=createnode(val);
	node *ptr;
	
	if (head==NULL){


		head=temp;
		
	}	
	else{
		ptr=lastelement();
		
		ptr->next=temp;

		

		
	}
	
	

}
node* lastelement(){
	node *ptr=head;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	return ptr;
	

}
int len(){
	int len=0;
	node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
		len++;
	

	}
	return len;	
}	
	
};
int main(){
	int svar,a,b,diff;
	node *temp;
	node *temp2;
	linkedlist obj1,obj2,longer,shorter;
	while(1){
	cout<<"\n1.insert to first node\n2.insert to 2nd node\n3.create intersection\n4.display\n5.entering elements after intersection\n6 exit\n7.check for intersection";
	cout<<"\nenter the op\n";
	cin>>svar;

	switch(svar){
		
		case(1):
			
			cout<<"enter the element of 1st linkedlist: ";
			cin>>a;
			


			obj1.insertlast(a);
			


			cout<<"\nelement inserted";
			break;
		case(2):
			cout<<"enter the element of 2nd linkedlist: ";
			cin>>b;
			obj2.insertlast(b);
			break;
		case(3):
			cout<<"enter the element of linkedlist: ";
			cin>>a;
			
			obj1.insertlast(a);
			temp=obj2.lastelement();
			temp->next=obj1.lastelement();
			if(obj1.lastelement()==obj2.lastelement())
				cout<<"sucess";	
			break;
				
			
		case(4):
		    obj1.display();
		    obj2.display();
		    break;	
		case (6):
			exit(1) ; 
		case(5):
			cout<<"enter the element of 1st linkedlist: ";
			cin>>a;
			obj1.insertlast(a);
		case(7):
			temp=obj1.head;
			temp2=obj2.head;
			while(temp->next->next!=NULL)
				temp=temp->next;
			while(temp2->next->next!=NULL)
				temp2=temp2->next;
			if(temp->next==temp2->next){
				cout<<"intersection exists\n";
			
				if (obj1.len()>obj2.len()){


					longer=obj1;
					shorter=obj2;
				}	
				else {

				
					longer=obj2;
					shorter=obj1;
					}	
			
				diff=abs(obj1.len()-obj2.len());
				
				node * temp3;
				temp3=longer.head;
				for(;diff>0;diff--){
					temp3=temp3->next;

				}
				longer.head=temp3;
				temp=longer.head;
				temp2=shorter.head;

				while(temp!=NULL&&temp2!=NULL){
					if (temp->data==temp2->data){
						cout<<"intersection found at:  "<<temp->data;
						break;
					}
					temp=temp->next;
					temp2=temp2->next;
				}
			}

				



				  

						}
					}
				}
				
