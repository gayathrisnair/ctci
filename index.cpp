#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,j,size;
	cout<<"enter the size";
	cin>>size;
	char *str=new char[size];
	int *temp=new int[26];
	cout<<"enter the string: ";


	for(i=0;i<size;i++)
		cin>>str[i];
	for(i=0;i<size;i++){

		temp[int(str[i])-97]=temp[int(str[i])-97]+1;
		
		
	}
	
	for(i=0;i<26;i++){
		
		if(temp[i]==1){
			for(j=0;j<size;j++)
				if(int(str[j])==(i+97)){
					cout<<"position is:"<<j;
					break;
				}


		}
	}

	

}