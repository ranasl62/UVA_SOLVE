#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,w;

};
class cmp
{
public :
    bool operator()(node &a, node &b)
    {
        return a.w<b.w;
    }
};
vector<node>graph;
int dijkstra(int n,int s, int d)
{
    bool color[n+10];
    for(int i=0;i<n;i++)color[i]=false;
    priority_queue<node,vector<node>,cmp>Q;
}
int main()
{
    int n,m;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

    }
    return 0;
}
