#include<iostream>
#include<string>

using namespace std;
int check1(string str){
    int i,flag=0;
    for(i=0;i<str.size();i++){
        if(str[i]=='@'){
           flag+=1;
           
        }
        if(str[i]=='.'){
                flag+=1;
                
        }
    } 

    
return flag;

}

int main(){
    string str;
    cout<<"enter the email id: ";
    cin>>str;
    if(check1(str)==2)
        cout<<"valid.. ";
    else
    cout<<"not valid..";
    
}