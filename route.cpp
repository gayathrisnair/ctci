#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class route{
    string start_city;
    string end_city;
    int distance;
public:
    route(){}
    route(string start_city,string end_city,int distance){
        this->start_city=start_city;
        this->end_city=end_city;
        this->distance=distance;
    }
    int getdistance(){
        return distance;
    }
};


class city{
    string name;
    map<string,route>routes;
public:
    void create_route(string start_city,string end_city,int distance){
        route route_ob(start_city,end_city,distance);
        routes.insert(pair<string,route>(end_city,route_ob));
        cout<<"route created..";
    }
    int getrouteweight(string end_city){
        if(routes.find(end_city)!=routes.end())
            return ((routes.find(end_city))->second).getdistance();
        else
            return -1;
    }
    city(){}
    city(string name){
        this->name=name;
    }
};


class cities{
    map<string,city>citys;
public:
    cities(vector<string>name){
        for(int i=0;i<name.size();i++){
            city city_ob(name[i]);
            citys.insert(pair<string,city>(name[i],city_ob));
        }
    }
    void create_route(string start_city,string end_city,int distance){
        if(citys.find(start_city)!=citys.end()){
            (citys.find(start_city)->second).create_route(start_city,end_city,distance);
        }
    }
    int getrouteweight(vector<string>inp){
        int distance=0;
        for(int i=0;i<inp.size()-1;i++){
            if(citys.find(inp[i])!=citys.end()){
                if((citys.find(inp[i])->second).getrouteweight(inp[i+1])!=-1)
                    distance+=(citys.find(inp[i])->second).getrouteweight(inp[i+1]);
                else{
                    distance=-1;
                    return distance;  
                }  
            }
        }
        return distance;
    }
    cities(){}  

};

int main(){
    int op;
    cities cityobj({"A","B","C","D"});
    do{
        cout<<"\n1.create route\n2.find route distance\n";
        cin>>op;
        switch(op){
            
            case(1):
            {   string start_city,end_city;
                int distance;
                cout<<"enter start city: ";
                cin>>start_city;
                cout<<"enter end city: ";
                cin>>end_city;
                cout<<"enter distance: ";
                cin>>distance;
                cityobj.create_route(start_city,end_city,distance);
                
            }
            break;
            case(2):
            {   vector<string>input;
                string str;
                cout<<"enter route comma seperated:  ";
                cin>>str;
                stringstream ss(str);
                while(ss.good()){
                    string substr;
                    getline(ss,substr,',');
                    input.push_back(substr);
                }
                if(cityobj.getrouteweight(input)==-1)
                    cout<<"route doesnt exist: ";
                else
                    cout<<"distance is: "<<cityobj.getrouteweight(input);
                
            }
            break;
        }
    }while(op<4);

}