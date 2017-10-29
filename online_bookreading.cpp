#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class book{
    string author;
    string title;
public:
    book(){}
    const string gettitle()const{
        return title;
    }
    book(string author,string title){
        this->author=author;
        this->title=title;
    }



};
class user{
    string name;
    book current_book;
public:
    user(){}
    user(string name){
        this->name=name;
    }
    const string getname() const{
        return name;
    }
    void read_book(book bookname){
        current_book=bookname;
        cout<<"book added as current book";
        
    }
        

    
};
int main(){
    int op;
    vector<user> obj;
    vector<book>book_ob;
    book ob("jk rowling","harrypotter");

    book_ob.push_back(ob);
    cout<<"1.create user 2.read a book";
    do{
        cin>>op;
        switch(op){
            case(1):
                    {
                    string name;
                    cout<<"enter name of user: ";
                    cin>>name;
                    user ob(name);
                    obj.push_back(ob);
                    }
                    break;
            case(2):
                    {   
                        string name,book_name;
                        cout<<"give user name: ";
                        cin>>name;
                        vector<user>:: iterator userit;
                        vector<book>:: iterator bookit;
                        userit=find_if(obj.begin(),obj.end(),[name](user const& usr){
                            return usr.getname() == name;
                        });
                        if(userit!=obj.end()){
                            cout<<"enter book name: ";
                            cin>>book_name;
                            bookit=find_if(book_ob.begin(),book_ob.end(),[book_name](book const&bk){return bk.gettitle()==book_name;});
                            if(bookit!=book_ob.end()){
                             (*userit).read_book(*bookit);
                             
                                
                                

                            }
                            else
                            cout<<"book not available: ";


                        }
                        else
                            cout<<"not registere user.. ";
                    }
            
        }
    }while(op<2);
   
}