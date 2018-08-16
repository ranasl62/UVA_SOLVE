#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
struct ascii
{
    int c,i;
};
bool cmp(ascii x, ascii y)
{
    if (x.i < y.i) return 1;
    if (x.i == y.i && x.c>y.c) return 1;
    return 0;
}
vector<ascii>arr2;
int arr[200];
int main()
{
//freopen("test.txt","r",stdin);
//freopen("out.txt","w",stdout);
    string str;
    bool R=false;
    while(getline(cin,str))
    {
        for(int i=0; str[i]; i++)
        {
            int a=toascii(str[i]);
            arr[a]++;
        }
        for(int i=128; i>=32; i--)
        {
            if(arr[i])
            {
                ascii a;
                a.c=i;
                a.i=arr[i];
                arr2.push_back(a);
            }
        }
        sort(arr2.begin(),arr2.end(),cmp);

        if(R)cout<<endl;
        R=true;
        for(int i=0; i<arr2.size(); i++)
        {
            cout<<arr2[i].c<<" "<<arr2[i].i<<endl;
        }
        arr2.clear();
         memset(arr,0,sizeof(arr));


    }
    return 0;
}
