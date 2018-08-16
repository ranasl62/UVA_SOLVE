#include<bits/stdc++.h>
using namespace std;
bool arr[210];
void reset()
{
    for(int i=0; i<210; i++)arr[i]=0;
    return;
}
int main()
{
    int t;
    int n,k;
    int a;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        reset();
        set<int>ar;
        set<int>::iterator it;
        for(int i=0; i<k; i++)
        {
            cin>>a;
            arr[a]=1;
            ar.insert(a);
        }
        int counts=0;
        int x=0;
        int y=1;
        while(y)
        {
            counts++;
            if(ar.size()==n||x==n)
            {
                cout<<counts<<endl;
                y=0;
            }
            x=0;
            for(it=ar.begin(); it!=ar.end() ; it++)
            {
                a = *it;
                if(a-counts>0)
                {
                    arr[a-counts]=1;
                }
                if(a+counts<=n)
                {
                    arr[a+counts]=1;
                }
            }
            for(int i=1; i<=n; i++)
                if(arr[i])x++;

        }
    }



    return 0;
}
