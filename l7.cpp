#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{	int e1,e2,s;
	forward_list<int> l1,l2;
	forward_list<int>::iterator i,j;
	
	cout<<"enter the element of first element ";
	cin>>e1;
	l1.assign({e1});
	cout<<"enter the element of first element ";
	cin>>e2;
	l2.assign({e2});


		
	
		cout<<"enter the elements and press 1 to exit\n";
		while(s!=1){
			cout<<"enter the element of list1";
			cin>>e1;
			cout<<"enter the element of list2";
			cin>>e2;
			
			if(e1==e2){
				//for(i=l1.begin(),j=l2.begin();i!=l1.end(),j!=l2.end():i++,j++);
				l1.push_front(e1);
				i=l2.end();
				j=l1.end();
				advance(i,-1);
				advance(j,-1);
				j=i;
			}
			else{	
				l1.push_front(e1);
				l2.push_front(e2);
				
			}
			cout<<"do yo want to exit";
				cin>>s;
			
		}

		
		
		
		//cout<<"enter the element of first list ";
		//cin>>e2;
		//if(e1==e2){
			//l1.push_front(e1);
			//j=i; 
		//}
		//else{
			
			//l2.push_front(e2);
			cout<<"the list is\n";
			for(i=l1.begin();i!=l1.end() ;i++)
				cout<<*i<<"\n";
			cout<<"2nd list is";
			for(j=l2.begin();j!=l2.end() ;i++)
				cout<<*j<<"\n";

		//}	
	//}
	
}