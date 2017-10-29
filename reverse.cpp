#include<iostream>
#include<string>
using namespace std;
string rev(string temp){
	string temp1;

}
int main(){
	int t,i,j,k;
	string temp,rev;
	string s=".";
	cout<<"\nenter no of test cases: ";
	cin>>t;
	string str[t];
	cout<<"\nenter the test cases: ";
	for(i=0;i<t;i++){
		cin>>str[i];
		//temp=reverse(str[i]);
		k=0;
		j=0;
		while(k<str[i].size()&&j<str[i].size()){
		
		str[i].substr(j,(str[i].find(s,j)-j));
		
		j=j+str[i].substr(j,str[i].find(s,j)-j).size()+1;
		k++;
		}

	}
	/*for(i=0;i<t;i++){
		string temp=str[i];
		for(j=0;j<temp.size();)
			if(temp[j]!='.')
				k++;
			else{
				rev=reverse(str.substr(j,k));
				cout<<rev;
			}*/



	//}


}