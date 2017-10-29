#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class book{
    string name;
    string author;
public:
    book(string name,string author){
        this->name=name;
        this->author=author;
    }
    book(){}
    book(string name){
        this->name=name;
    }
    

};
class user{
    string user_id;
    string user_name;
    book book_borrowed;
public:
    void borrowbook(book name){
        book_borrowed=name;
        
       
    }
    user(){}
    user(string user_id,string user_name){
        this->user_id=user_id;
        this->user_name=user_name;
    }


};
class library{
    map<string,book>booklist;
public:
    library(vector<string> name,vector<string>author){
        for(int i=0;i<name.size();i++){
        book book_ob(name[i],author[i]);
        booklist.insert(pair<string,book>(name[i],book_ob));
        }
        
    }
   int findifavail(string name){
       if(booklist.find(name)==booklist.end())
        return -1;
       else
       return 1; 

}
void borrowbook(string name,user user_ob){
    user_ob.borrowbook(booklist.find(name)->second);

    booklist.erase(booklist.find(name));
}
void addbook(string name,user user_ob){
    book book_ob(name);
    booklist.insert(pair<string,book>(name,book_ob));

}
library(){}

};

int main(){
    int op;
    string user_id,user_name;
    library library_ob={{"A","B"},{"C","D"}};
    map<string,user>userlist;
    do{
    cout<<"\n1.create user\n2.borrow book\n3.return book: \n";
    cin>>op;
    switch(op){
        case(1):
        
        {
            cout<<"enter user_id: ";
            cin>>user_id;
            cout<<"enter name: ";
            cin>>user_name;
            if(userlist.find(user_id)!=userlist.end())
                cout<<"user id already exists..";
            else{
                user user_ob(user_id,user_name);
                userlist.insert(pair<string,user>(user_id,user_ob));
                cout<<"user created...";
            }

        }
        break;
        case(2):
        {
            string book;
            cout<<"enter user id: ";
            cin>>user_id;
            if(userlist.find(user_id)==userlist.end())
                cout<<"Invalid User..Please create account..";
            else{
                cout<<"enter book to borrow: ";
                cin>>book;
                if(library_ob.findifavail(book)==-1)
                    cout<<"book not available for borrow..";
                else{
                    user user_ob=userlist.find(user_id)->second;

                    
                    library_ob.borrowbook(book,user_ob);
                    cout<<"book borrowed...";
                    
                }    
            }    
        }
        break;
        case(3):
        {
            string book;
            cout<<"enter user id: ";
            cin>>user_id;
            if(userlist.find(user_id)==userlist.end())
                cout<<"Invalid User..Please create account..";
            else{
                cout<<"enter name of book to be returned: ";
                cin>>book;
                user user_ob=userlist.find(user_id)->second;
                library_ob.addbook(book,user_ob);
                cout<<"book returned: ";
            }    
        }


    }
    }while(op<3);
}