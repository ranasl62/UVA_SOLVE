#include<bits/stdc++.h>
using namespace std;
    vector<int>arr;
int in;
int bin(int key,int start,int end)
{
    int m=start+(end-start)/2;
    if(end<start)
    {
       in=(end+start+1)/2;
        return -1;
    }
    if(arr[m]==key)return m;
    else if(key>arr[m])return bin(key,m+1,end);
    else return bin(key,start,m-1);
}
int main()
{
    int n;
    int a,q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a;
        int t=bin(a-1,0,n-1);
        if(t!=-1)cout<<arr[t];
        else if(in-1<0)cout<<"X";
        else cout<<arr[in-1];
        //cout<<1<<" "<<t<<" "<<in<<endl;
        cout<<" ";
        int t1=bin(a+1,0,n-1);
        if(t1!=-1)cout<<arr[t1]<<endl;
        else if(in==n)cout<<"X"<<endl;
        else cout<<arr[in]<<endl;
        //cout<<2<<" "<<t1<<" "<<in<<endl;
    }
    return 0;
}

