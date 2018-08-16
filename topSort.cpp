#include <bits/stdc++.h>
using namespace std;
#define N 10000
int n;
int e;
vector<int> adj[N];
stack<int> output;
bool visit[N];

void DFS(int x){
    visit[x]=true;
    int sz=adj[x].size();
    for(int i=0;i<sz;i++){
        if(visit[adj[x][i]]==false) DFS(adj[x][i]);
    }
    output.push(x);
}

int main(){

    cout<<"Enter The Number of Nodes: ";
    cin>>n;
    cout<<"Enter The Number of Edges: ";
    cin>>e;

    for(int i=0;i<N;i++)    adj[i].clear();

    while(e--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=0;i<n;i++){
        if(visit[i]==false) DFS(i);
    }
    cout<<"Topsorted Sequence is: ";
    while(!output.empty()){
        cout<<output.top()<<" ";
        output.pop();
    }
}
