#include<bits/stdc++.h>

using namespace std;

int main(){
    long long cnt=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='Q')
            for(int j=i+1;j<a.size();j++){
            if(a[j]=='A')
                for(int k=j+1;k<a.size();k++){
                    if(a[k]=='Q') cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
