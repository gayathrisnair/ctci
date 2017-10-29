#include<iostream>
#include<bits/stdc++.h>
#include<regex>
using namespace std;

class product{
    string item_type;
    int quantity;
    int price;
public:
    product(string item_type,int quantity,int price){
        this->item_type=item_type;
        this->quantity=quantity;
        this->price=price;
    
    }
   int  getquantity(){
        return quantity;
    }
    void setguantity()
    product(){}
    int getprice(){
        return price;
    }
};  
class store{
    string store_location;
    map<string,product>list;
    map<int,int>:: iterator it;
public:
    store(string store_location,map<string,product>list)

    }
    store(){

    }
    int *getquantity(string item){
        
        return (list[item].getquantity());
       
        

    }
    string getstorelocation(){
        return store_location;
    }
    map<string,product> getlist(){
        return list;
    }
    int getprice(string item){
       return (list[item].getprice());

    }

    void findstore(string passport,map<product,int> order_list){
        map<string,int> :: iterator it;
        int i;
        float trans_cost;
        regex passB("(B)[0-3]{3}[a-zA-Z]{2}[a-zA-Z0-9]{7}");
        regex passA("(A)[a-zA-z]{2}[a-zA-z0-9]{9}");
        if(regex_match(passport,passB))
            nationality="BRAZIL";
        else if(regex_match(passport,passA))
            nationality="ARGENTINA";
            cout<<int(fullfill(store_ob));
       
    }
    float fullfill(store store_ob[]){
        float trans_cost=0.0;
        int price=0;
        int i;
        map<string,int> temp;
        map<string,int>::iterator it;
        for(i=0;i<2;i++){
            if(store_ob[i].getstorelocation()==purchase_store){
                for(it=prod.begin();it!=prod.end();it++){
                    if(*(store_ob[i].getquantity( it->first)) < it->second){

                        cout<<"in if:"<<"\t";
                        temp.clear();
                        temp={{it->first,it->second}};
                        *(store_ob[1-i].getquantity( it->first)) -= it->second;
                        price+=calcprice(store_ob[1-i],temp);
                        trans_cost+=calctransportcost( (it->second)-(*(store_ob[1-i].getquantity( it->first)))); 
                        
                    
                    } 
            
            
                    else{ 
                        cout<<"in else: "<<"\t";
                        
                        temp.clear();
                        temp={{it->first,it->second}};

                        *(store_ob[i].getquantity( it->first)) -= it->second;
                        price+= calcprice(store_ob[i],temp);
                        
                        
                        
                 
                        
                    }
                }
                return price+trans_cost;
            }
        }
    }
int calcprice(store store_ob,map<string,int> item){
   
    int price;
    map<string,int>:: iterator it;
    it=item.begin();
   
    price=(it->second)*(store_ob.getprice(it->first));
    
    
    return price;
    }
float calctransportcost(int a){
    float trans_cost;
    
    if(nationality==purchase_store){
        
            trans_cost+=((40*(a))*(.20));
        
    }
    else{
        trans_cost+=(40*(a));

    }
    return trans_cost;
}

};
class order_handler{
    map<string,stores> store_list;
public:
    stores(string store_name[],store store_ob[]){
    

    }
};

int main(){
    int op;
    order_handler object;
    object.handleorder()
    stores store_ob({"BRAZIL",map_brazil},{"ARGENTINA",map_argentina});
    map<string,store>store_list;
    store ob1("BRAZIL",map_brazil);
    store_list.insert(pair<string,store>("BRAZIL",ob1);
    store ob2("ARGENTINA",map_argentina);
    store_ob.insert(pair<string,std("ARGEBTINA",ob2));

    

    
    product product_ob[4]={product("IPOD",100,65),product ("IPHONE",100,100),product ("IPOD",100,100),product("IPHONE",50,150)};    
    map<string,product> map_brazil={{"IPOD", product_ob[0]},{"IPHONE",product_ob[1]}};
    map<string,product> map_argentina={{"IPOD",product_ob[2]},{"IPHONE",product_ob[3]}};
    
    
    //initialize stores
    do{
        cout<<"1.order:  ";
        cin>>op;
        switch(op){
            case(1):
                string store,passport;
                int qty1,qty2;
                string item_type1,item_type2;
                cout<<"enter store: from which to place order ";
                cin>>store;
                cout<<"enter passport number: ";
                cin>>passport;
                cout<<"enter product type: ";
                cin>>item_type1;
                cout<<"enter quantity: ";
                cin>>qty1;
                cout<<"enter product type: ";
                cin>>item_type2;
                cout<<"enter quantity: ";
                cin>>qty2;
                (map<string,int>prod={{item_type1,qty1},{item_type2,qty2}};
                if(store_list.find(store)->second).fullfill(passport,prod)!=1){

                }
            
                  
                
        }
    }while(op>1);

}
