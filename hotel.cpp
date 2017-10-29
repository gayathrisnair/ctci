#include<iostream>
#include<bits/stdc++.h>
using namespace std;
map<string,int> week={{"mon",1},{"tue",1},{"wed",1},{"thur",1},{"fri",0},{"sat",0},{"sun",0}};
class hotel{
    string name;
    int rating;
    int price_weekedend_regular;
    int price_weekday_regular;
    int price_weekend_rewaredee;
    int price_weekday_rewardee;
public:
    hotel(){}
    hotel(string name,int rating,int price_weekedend_regular,int price_weekday_regular,int price_weekend_rewaredee,int price_weekday_rewardee){
        this->name=name;
        this->rating=rating;
        this->price_weekedend_regular=price_weekedend_regular;
        this->price_weekday_regular=price_weekday_regular;
        this->price_weekend_rewaredee=price_weekend_rewaredee;
        this->price_weekday_rewardee= price_weekday_rewardee;



    }
   const string getname()const{
        return name;
    }
    const int getprice_weekday_rewardee()const {
        return price_weekday_rewardee;
    }
    const int getprice_weekend_rewaredee()const{
        return price_weekend_rewaredee;
    }
    const int getprice_weekday_regular()const{
        return price_weekday_regular;
    }
    const int getprice_weekedend_regular()const{
        return price_weekedend_regular;
    }
    bool operator< (const hotel &hotel_ob) const
    {
        if(hotel_ob.name < this->name)
            return true;
    }
    
     
};
class handleorder{
    string customer_type;
    vector<string> days;
    int n;
    
public:
    handleorder(){
    }

     handleorder(string customer_type,vector<string>days,int n,hotel ob[]){
         this->customer_type=customer_type;
         this->n=n;
         
            this->days=days;
          cout<< getcheaphotel(ob);
        }
    int getcheaphotel(hotel ob[]){
        map<hotel,int>x,y,z,small;
        
            x=calcprice("x",customer_type,days,ob);
            y=calcprice("y",customer_type,days,ob);
            z=calcprice("z",customer_type,days,ob);
            map<hotel,int>:: iterator itx=x.begin();
            map<hotel,int>:: iterator ity=y.begin();
            map<hotel,int>:: iterator itz=z.begin();
        
       
            if(x[ob[0]]<y[ob[1]]){
               
            
                small=x;
                else
                small=y;

            }
            if(small->first<z->seond){
                cout<<small->first.getname();
                
                return small->second;
            }
            else{
                cout<<z->first.getname();
                return z->second;
            }
        
        
        return 1;
    }
    map<hotel,int> calcprice(string hotel_name,string customer_type,vector<string>days,hotel ob[]){
            map<hotel,int> result;
            int res=0;
            result.clear();
           
                for(int i=0;i<3;i++){
                    if(ob[i].getname()==hotel_name){
                        for(int j=0;j<n;j++){
                            if(customer_type=="rewardee"&& (isweekday(days[j])==1))
                                res+=ob[i].getprice_weekedend_regular();
                            else if(customer_type=="rewaredee")
                                res+=ob[i].getprice_weekend_rewaredee();
                            else if(customer_type=="regular" && (isweekday(days[j])==1))
                                res+=ob[i].getprice_weekday_regular();
                            else if(customer_type=="regular")
                                res+=ob[i].getprice_weekedend_regular();
                        }  
                    result.insert(pair<hotel,int>(ob[i],res)); 
                    return result;        
                }
        
            }
        }
    int isweekday(string day){
        return week[day];


    }


};
int main(){
    string customer_type;
    int n,i=0;
    hotel ob[3]={{"x",3,120,100,160,190},{"y",5,150,130,95,100},{"z",3,150,195,90,120}};
    
    string a;
    cout<<"enter customer type: ";
    cin>>customer_type;
    cout<<"enter no of days of stay: ";
    cin>>n;
    vector<string> days;
    for(i=0;i<n;i++){
        cin>>a;
        days.push_back(a);
        
    }

    handleorder obj(customer_type,days,n,ob);

}