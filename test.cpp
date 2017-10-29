#include<iostream>
#include<vector> 
using namespace std;
class test{
	int a,b;
public:
	test(int val){
		a=val;
	}
	
	void seta(int val){
		a=val;
	}

	void display(){
		cout<<a<<"\n";

	}
	test(){
		cout<<"this constructor is called\n";
		a=0;
		b=0;
	}

};


main(){
	vector<test>arr;
	test *obj=new test[];
	obj[0].display();
	arr.push_back(obj[0]);
	arr[0].display();
	

	
	
	

}