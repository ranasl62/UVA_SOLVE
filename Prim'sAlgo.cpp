#include<cstdio>
#include<queue>
#include<mem.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>graph[20000+10];
vector<int>cost[20000+10];
struct node
{
    int u,v,w;
};
class cmp
{

public :
    bool operator()(node &a, node &b)
    {
        if(a.w>b.w)  return true ;
        else return false ;
    }
};
int MST(int n)
{
    int color[n+10];
    int ans=0,cnt=0;
    for(int i=0; i<n; i++)color[i]=false;
    priority_queue<node,vector<node>,cmp>Q;
    color[0]=true;
    for(int i=0; i<graph[0].size(); i++)
    {
        node x;
        x.u=0,x.v=graph[0][i],x.w=cost[0][i];
        Q.push(x);
    }
    while(!Q.empty())
    {
        node x =Q.top();
        Q.pop();
        int u=x.u,v=x.v,w=x.w;
        if(color[v]==false)
        {
            ans+=w;
            cnt++;
            color[v]=true;
            for(int i=0; i<graph[v].size(); i++)
            {
                node x;
                x.u=v,x.v=graph[v][i],x.w=cost[v][i];
                Q.push(x);
            }
        }
        if(cnt==n-1)break;

    }
    if(cnt!=n-1)return -1;
    return ans;
}
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    while(m--)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        graph[u].push_back(v);
        graph[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    printf("%d\n",MST(n));
    return 0;
}
