//Find pairs in an integer array whose sum is equal to 10 (bonus: do it in linear time
    #include<iostream>
    using namespace std;
    #include<map>
    #include<iterator>

    int main(){
        int i,n;
        map<int,int> mp;
        map<int,int> :: iterator it;
        cout<<"enter n: ";
        cin>>n;
        int *a=new int[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)   
            if(mp.find(a[i])==mp.end())
                    mp.insert(pair<int,int>(a[i],1));
        for(i=0;i<n;i++){
            if(mp[10-a[i]]==1){
                mp[a[i]]=0;
                cout<<"pairs are: "<<a[i]<<" "<<10-a[i]<<"\n";
            }

        }    
        for(it=mp.begin();it!=mp.end();it++) 
            cout<<it->first<<" "<<it->second<<"\n";

}

