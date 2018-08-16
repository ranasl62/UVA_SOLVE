#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long  dm = ceil(k*1.0/2);
    long long d = dm/m;
    long long dd = dm%m;
    if(dd==0){
        cout<<d<<" "<<m<<" ";
        if(k%2==1) cout<<"L"<<endl;
        else cout<<"R"<<endl;
    }
    else{
        cout<<d+1<<" "<<dd<<" ";
        if(k%2==1) cout<<"L"<<endl;
        else cout<<"R"<<endl;
    }

}

