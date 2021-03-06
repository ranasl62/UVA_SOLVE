#include <cstdio>
#include <vector>
using namespace std;
#define mx 1000
vector <int> graph[mx+10] , graphGT[mx+10] , Q ;
bool visit[mx+10];
int t=0,cycle=0,dt[mx+10],ft[mx+10],ct[mx+10],indegree[mx+10],outdegree[mx+10];
void dfs1(int u)
{
    if(visit[u]) return;
    visit[u]=true;
    dt[u]=++t;
    for(int i=0;i<graph[u].size();i++)
    {
        int v = graph[u][i];
        dfs1(v);
    }
    ft[u]=++t;
    Q.push_back(u);
}
void dfs2(int u,int cmp)
{
    visit[u]=false;ct[u]=cycle;
    printf("%d ",u);
    for(int i=0;i<graphGT[u].size();i++)
    {
        int v = graphGT[u][i];
        if(visit[v]&&cmp>ft[v]) dfs2(v,cmp);
    }
}
int main()
{
    int N,M; // N is the number of nodes and M is the number of connections
    scanf("%d%d",&N,&M);
    while(M--)
    {
        int u,v; // A connection from node u to node v
        scanf("%d%d",&u,&v);
        graph[u].push_back(v);
        graphGT[v].push_back(u); // Reverse graph
    }
    for(int i=1;i<=N;i++) dfs1(i);
    for(int i=Q.size()-1;i>=0;i--)
    {
        int u = Q[i];
        if(visit[u]==true)
        {
            printf("%d :: ",++cycle);
            dfs2(u,ft[u]);
            printf("\n");
        }
    }
    for(int u=1;u<=N;u++)
    {
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(ct[u]!=ct[v]) indegree[ct[u]]++,outdegree[ct[v]]++;
        }
    }
    int in=0,out=0;
    for(int i=1;cycle!=1&&i<=cycle;i++)
    {
        if(indegree[i]==0) in++;
        if(outdegree[i]==0) out++;
    }
    printf("Minimum connections is required to make the whole graph is a cyclic graph :: %d\n",max(in,out));
    return 0;
}
