#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    int rel;
    cin>>len>>rel;
    int x,y;
    int mat[len][len];
    for(int i=0; i<len; i++)
        for(int j = 0; j<len; j++)
            mat[i][j]=0;
    for(int j = 0; j<rel; j++)
    {
        cin>>x>>y;
        mat[x-1][y-1]=1;
    }
    bool trasitive = true ;
    for(int i=0; i<len; i++)
        for(int j=0; j<len; j++)
            if(mat[i][j])
            {
                for(int k=0; k<len; k++)
                    if(mat[j][k])
                    {
                        if(!(mat[i][k]))
                        {
                            trasitive=false;
                            break;
                        }
                    }
            }
    trasitive ? cout<<"Transitive"<<endl : cout<<"Not Transitive"<<endl;
    return 0;
}
