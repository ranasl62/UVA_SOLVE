#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a,b,c;

};
vector<node>arr;

int main()
{
    int t,n,q;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&q);
        int a,b,c;
        int f=999999999;
        int rr[n];
        for(int j=0; j<q; j++)
        {
            scanf("%d%d%d",&a,&b,&c);
            node ar;
            ar.a=a;
            ar.b=b;
            ar.c=c;
            arr.push_back(ar);
            if(f>c)f=c;
        }
        for(int e=0;e<n;e++)rr[e]=f;
        for(int j=0; j<q; j++)
        {
            int l=arr[j].a-1;
            do
            {
               if(rr[l]<arr[j].c)
                    rr[l]=arr[j].c;
                    l++;
            }while(l<arr[j].b);
        }
        cout<<"Case 1:";
        for(int g=0;g<n;g++)
        {
            cout<<" "<<rr[g];
        }
        cout<<endl;


    }
    cout<<endl;
    return 0;
}
