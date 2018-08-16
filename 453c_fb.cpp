// In the name of Allah the Most Merciful.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 1e4+9;
vector<int>edges[MAX+9];
int color[MAX+9];
int counter = 0;

void dfs(int u , int p , int c)
{
    int si = edges[u].size();
    if(color[u]!=c)counter++;
   // cout<<c<<" "<<color[u]<<endl;
    for(int i=0;i<si;i++){

        if(edges[u][i]!=p){
                //cout<<edges[u][i] <<" "<< u <<" " << color[u]<<endl;
                dfs(edges[u][i] , u , color[u]);
    }
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n-1;i++){

        int in;
        scanf("%d",&in);

        edges[i+2].push_back(in);
        edges[in].push_back(i+2);
    }

    for(int i=1;i<=n;i++){

        int in;
        scanf("%d",&color[i]);
    }

    dfs(1 , 0 , 0);

    printf("%d\n",counter);

    return 0;
}
