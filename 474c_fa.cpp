#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;
    int a,b,c;
    a=b=c=0;
    string str1=str;
    sort(str1.begin(),str1.end());
    for(int i=0;i<str.size();i++){
        a+=(str[i]=='a');
        b+=(str[i]=='b');
        c+=(str[i]=='c');
    }
    //cout<<str1<<endl;
    if((str1==str)&&(a==c||b==c)&&a&&b&&c){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
