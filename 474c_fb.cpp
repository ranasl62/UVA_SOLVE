#include<bits/stdc++.h>
using namespace std;
struct abc
{
    int a,b;
};
bool operator <(const abc &x,const abc &y)
{
    if(abs(x.a-x.b)>abs(y.a-y.b))return true;
    return false;
}
int main()
{


    unsigned int n, k1,k2;
    cin>>n>>k1>>k2;
    abc arr1[n+5];
    for(int i=0; i<n; i++)cin>>arr1[i].a;
    for(int i=0; i<n; i++)cin>>arr1[i].b;
    long long sum=0;
    int f=0;


    while(k1)
    {
        sort(arr1,arr1+n);
        if(arr1[0].a==arr1[0].b)f=1;
        for(int i=0; i<n; i++)
            if(arr1[i].a>arr1[i].b)
            {
                if(!k1)break;
                arr1[i].a-=1;
                k1--;
            }
            else  if(arr1[i].a<arr1[i].b)
            {
                if(!k1)break;
                arr1[i].a+=1;
                k1--;
            }
            else if(f)
            {
                arr1[i].a+=1;
                k1--;
            }
        if(!k1)break;

    }
    f=0;
    while(k2)
    {

        sort(arr1,arr1+n);
        if(arr1[0].a==arr1[0].b)f=1;
        for(int i=0; i<n; i++){
            if(arr1[i].a>arr1[i].b)
            {

                arr1[i].b+=1;
                k2--;
            }
            else  if(arr1[i].a<arr1[i].b)
            {
                arr1[i].b-=1;
                k2--;
            }
            else if(f)
            {
                arr1[i].b+=1;
                k2--;
            }
            if(!k2)break;
        }
        if(!k2)break;
    }
    for(int i=0; i<n; i++)
    {
        sum+=(arr1[i].a-arr1[i].b)*(arr1[i].a-arr1[i].b);
    }
    cout<<sum<<endl;
    return 0;
}
