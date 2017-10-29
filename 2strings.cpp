#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int findocc(char i,int size,char *str){
	int j,count=0;
	for(j=0;j<size;j++){
		if(str[j]==i)
			count++;
	}
	return count;


}
int main(){
	int size,i,num;
	map<char,int> count;
	map<char,int>::iterator j,k;
	cout<<"enter the size: ";
	cin>>size;
	char *str=new char[size];
	cout<<"enter the string: ";
	cin>>str;
	for(i=0;i<size;i++){
		num=findocc(str[i],size,str);
		
		
		count.insert(pair<char,int>(str[i],num));
	}
	for(j=count.begin();j!=count.end();j++){
		cout<<j->first<<"\t"<<j->second<<"\t";
			
		for(k=count.begin()+1;k!=count.end();k++)
			if((j->second)-(k->second)==1){
				
				break;
			}
			cout<<"\n the no are: "<<j->first<<k->first;	
		}	
	//no.s to delete




	
	
}