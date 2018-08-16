#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
int city[500][500],ct,street,tc;
map<string,int>mp;

void indexing()
{
    int index=0,i,cost;
    string s1,s2;
    for(i=0; i<street; i++)
    {
        cin>>s1>>s2>>cost;
        if(mp[s1]==0)
            mp[s1]=++index;
        if(mp[s2]==0)
            mp[s2]=++index;
        city[mp[s1]][mp[s2]]=cost;
        city[mp[s2]][mp[s1]]=cost;
    }
}

void Floyd_Warshall()
{
    int i,j,k;
    for(k=1; k<=ct; k++)
        for(i=1; i<=ct; i++)
            for(j=1; j<=ct; j++){
                    city[i][j]=max(city[i][j],min(city[i][k],city[k][j]));
            //cout<<city[i][j]<<" "<<city[i][k]<<" "<<city[k][j] <<endl;
            }

}

int main()
{
    freopen("krushkal.txt","r",stdin);
    string source,destination;
    while(cin>>ct>>street)
    {
        if(ct==0 && street==0)    return 0;
        indexing();
        Floyd_Warshall();
        cin>>source>>destination;
        cout<<"Scenario #"<<++tc<<endl<<city[mp[source]][mp[destination]]<<" tons"<<endl<<endl;
//        for(int i=1;i<=ct;i++){
//            for(int j=1;j<=ct;j++)
//            {
//                cout<<city[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        mp.clear();
        clr(city);
    }
    return 0;
}
