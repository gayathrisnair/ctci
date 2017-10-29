//Implement squareroot function
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=2;i<n;i++){
        if(i*i==n){
            cout<<"squareroot of: "<<n<<"is: "<<i;
            break;
        }

    }
}