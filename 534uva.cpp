#include<bits/stdc++.h>

using namespace std;

int X[210];
int Y[210];
struct node
{
    int u,v;
    double w;
};
vector<node>graph;
int parent[1000+10];
void reset()
{
    //memset(parent,0,sizeof(parent));
    graph.clear();
}
double make_wait(int i,int j)
{
    double x = X[i]-X[j];
    double y = Y[i]-Y[j];
    return sqrt(x*x + y*y);
}
bool cmp(node a, node b)
{
    return a.w<b.w;
}
void make_scanf(int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&X[i]);
        scanf("%d",&Y[i]);
        //  cout<<X[i]<<" "<<Y[i]<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            double w = make_wait(i,j);
            node rana;
            rana.u=i;
            rana.v=j;
            rana.w=w;
            graph.push_back(rana);

        }
    }
    sort(graph.begin(),graph.end(),cmp);
//    for(int i=0;i<graph.size();i++)
//    {
//        cout<<graph[i].u<<" "<<graph[i].v<<" " <<graph[i].w<<endl;
//    }
}
int find_parent(int x)
{
    if(parent[x]==x)return x;
    return parent[x]=find_parent(parent[x]);
}
double MST(int n)
{
    double result;
    for(int i=0; i<n; i++)parent[i]=i;
    //cout<<graph.size()<<endl;
    for(int i=0; i<graph.size(); i++)
    {
        //cout<<graph[i].w<<endl;
        int x=find_parent(graph[i].u);
        int y=find_parent(graph[i].v);
        //cout<<graph[i].u<<" "<<graph[i].v<<" "<<graph[i].w<<endl;
        if(x!=y)
        {
            parent[x]=y;
            result+=graph[i].w;
        }
       // if(find_parent(0)==find_parent(1))break;
    }
    // cout<<result<<endl;
    return result;
}
int main()
{
    int n;
    int i=1;
    while(scanf("%d",&n) and n)
    {
        make_scanf(n);
        printf("Scenario #%d\nFrog Distance = %.3lf\n\n",i,MST(n));
        //cout<<MST(n)<<endl;
        reset();
        i++;
    }
    return 0;
}
