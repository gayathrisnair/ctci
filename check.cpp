// 
#include<iostream>
using namespace std;
int main(){
    int k,l,r,x,y;
    int i,j,n;
    cout<<"enter the lines of input: ";
    cin>>n;
    while(n!=0){
        cout<<"enter the input: ";
        cin>>k>>l>>r>>x>>y;
        for(i=x;i<=y;i++){
            if((l<=k*i)&&(k*i<=r)){
                cout<<"YES";
                break;
            }
            else{
                cout<<"NO";
                break;
                }
        }
        n--;

    }
}
