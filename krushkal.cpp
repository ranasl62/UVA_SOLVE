#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
pair<int,pair<int,int>>graph[20000+10];
int parent[20000+10];
int find_parent(int x)
{
    if(parent[x]==x)return x;
    return parent[x]=find_parent(parent[x]);
}
int MST(int n,int m)
{
    int ans=0;
    for(int i=0;i<n;i++)parent[i]=i;
    for(int i=0;i<m;i++)
    {
        int x=find_parent(graph[i].second.first);
        int y=find_parent(graph[i].second.second);
        //cout<<graph[i].first<<endl;
        if(x!=y)
        {
            ans+=graph[i].first;
            parent[x]=y;
        }
    }
    return ans;
}
int main()
{
    freopen("krushkal.txt","r",stdin);
    map<string,int>uv;
    map<string,int>::iterator U;
    map<string,int>::iterator V;
    int n,m;
    scanf("%d%d",&n,&m);
    int k=0;
    for(int i=0;i<m;i++)
    {
        string u,v;
        cin>>u>>v;
        scanf("%d",&graph[i].first);
       // cout<<u<<" "<<v<<endl;
        U=uv.find(u);
        V=uv.find(v);

        if(U==uv.end()){uv[u]=k++;
        //cout<<u<<endl;
        }

        graph[i].second.first=uv[u];

       if(V==uv.end())uv[v]=k++;
      // cout<<"v  "<<v<<endl;}

        graph[i].second.second=uv[v];
        cout<<uv[u]<<" "<<uv[v]<<endl;
    }
    sort(graph,graph+m);

    printf("%d\n",MST(n,m));
    return 0;
}
