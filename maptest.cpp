//map testing
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class product{
    string item_type;
    int quantity;
    int price;
public:
    product(string item_type,int quantity,int price){
       this-> item_type=item_type;
        this->quantity=quantity;
        this->price=price;
    
    }
  const int  getquantity()const{
        return quantity;
    }
    product(){}
    bool operator< (const product &product_ob) const
    {
        if(product_ob.item_type < this->item_type)
            return true;
    }

};  
using namespace std;
int main(){
    map<product,int>mp;
    product product_ob[2]={{"a",1,2},{"y",5,6}};
    cout<<mp[product_ob[0]];
    for(int i=0;i<2;i++)
    
    mp.insert(pair<product,int>(product_ob[i],2));
    map<product,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    cout<<it->first.getquantity()<<"\t"<<it->second;

    /*int min=5;
    product product_ob={product("IPOD",100,65};
    map<int,product> mp={{1, product_ob}};
    cout<<mp[1];
    mp.insert(pair<int,int>(4,5));
    map<int,int> :: iterator it;
    it=mp.begin();
    if(min>it->first)
    cout<<it->first;
    */


}