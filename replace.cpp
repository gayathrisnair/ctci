#include<iostream>
#include<string>
using namespace std;
int  *count1(string str){
    int i;
    int *a=new int[26];
    for(i=0;i<str.length();i++){
        a[str[i]-97]=  a[str[i]-97]+1;

    }
    return a;

}
int main()
{
    string str1,str2;
    int i,j=0,count=0;
    cout<<"enter the 2 strings: ";
    cin>>str1>>str2;
    int *a=count1(str2);
    for(i=0;i<str1.length();i++){
        if(a[str1[i]-97]!=0){
            j++;

        }
        else{
            str1[j]=str1[i];
            j++;
        }

        }
        str1[j]=str1.c_str();
        
    }
    
}

    cout<<"the string is: "<<str1;
}