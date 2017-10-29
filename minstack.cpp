//Find the minimum element in a stack in O(1) time
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pushs(map<int,int> a, stack< map<int,int> > *st,int *min){

    
    
    map<int,int> :: iterator it;
    it=a.begin();
    if(st.empty())
        

    
   
    if(it->first<*min)
        *min=it->first;
    
    st->push(a);


    

}
void pops(stack< map<int,int> > *st,int *min){
    
    if(!st->empty()){
        map<int,int> :: iterator it;
        it=st->top().begin();
        
        if(it->first==*min)
            *min=it->second;


            

        st->pop();


    }

    

}
void display(stack< map<int,int> >* st){
    while(!st->empty()){
        st->top();
         st->pop();
    }
   

}

int main(){
    stack< map<int,int> >st;
    int ch,a,min=0;
    
    map<int,int>b;
    

   
    do{
        cout<<"enter op: ";
        cin>>ch;
        switch(ch){
            case(1):
                
                cout<<"enter element: ";
                cin>>a;
                
                
                
                pushs(b,&st,&min);
                break;
            case(2):
                pops(&st,&min);
                break;
            case(4): 
                cout<<min;
            case(5):
             break;
             
        }
    }while(ch<5);
    
}