#include<bits/stdc++.h>
using namespace std;
struct rana{
    int a,b;
};
bool cmd (rana x ,rana y){
                if(x.a==y.a)
                        return x.b > y.b;
                return x.a < y.a;
}
int main()
{
    int n,m;
    int a,b;
    vector<rana>arr;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.begin()+n,cmd);
    //cout<<arr[0].a<<" " <<arr[0].b<<endl;
    if(arr[0].a!=0){cout<<"NO"<<endl;return 0;}
    int x=arr[0].b;
    for(int i=1;i<n;i++){
      //  cout<<arr[i].a<<" " <<arr[i].b<<endl;
            if(arr[i].a <=x ){
                if(arr[i].b > x ){
                        if(x<arr[i].b)
                        x=arr[i].b;
            }
            }
            else {
                cout<<"NO"<<endl;
                return 0;
            }
    }
    if(m<=x)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
