#include <bits/stdc++.h>
using namespace std;

void pattern2(int n){
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++)
            cout<< (1+ max( abs(n-i),abs(n-j) ) );
        cout<<endl;
    }
}

int main(){
    pattern2(4);
    return 0;
}