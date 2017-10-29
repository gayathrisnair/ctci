#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    
    
    int i,count;
    cout<<"enter the string: ";
    getline(cin,str);
    
    for(i=0;i<str.length();i++)
        if(str[i]==' ')
            count++;
    for(i=str.length()-1;i>=0;i--){
        if(str[i]!= ' '){
            
            str[i+(count*3)]=str[i];
            
            
        }
        else if (str[i]==' '){

            
            str[i+(count*3)]='0';
            
            str[(i+(count*3))-1]='2';
            cout<<"at 2 is :"<<str[(i+(count*3))-1];
            str[i+(count*3)-2]='%';
            count=count-2;
        }    
        
    } 
    cout<<"the new string is: "<<str;

}        


        
    


