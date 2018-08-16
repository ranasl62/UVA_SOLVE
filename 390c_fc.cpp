#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[8][8];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            str[i][j]='R';

        }
    }
    bool flag=false;
    for(int i=0; i<4; i++)
    {
        string s;
        cin>>s;
        str[2+i][2]=s[0];
        str[2+i][3]=s[1];
        str[2+i][4]=s[2];
        str[2+i][5]=s[3];
    }
    for(int i=2; i<6; i++)
    {
        for(int j=2; j<6; j++)
        {
            if(str[i][j]=='x')
            {
                if(str[i][j+1]=='x'&&str[i][j+2]=='.')
                {
                    flag=true;
                    break;
                }
              else  if(str[i-1][j]=='x'&&str[i-2][j]=='.')
                {
                    flag=true;
                    break;
                }
              else  if(str[i][j-1]=='x'&&str[i][j-2]=='.')
                {
                    flag=true;
                    break;
                }
              else  if(str[i-1][j-1]=='x'&&str[i-2][j-2]=='.')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j]=='x'&&str[i+2][j]=='.')
                {
                    flag=true;
                    break;
                }
               else if(str[i-1][j+1]=='x'&&str[i-2][j+2]=='.')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j-1]=='x'&&str[i+2][j-2]=='.')
                {
                    flag=true;
                    break;
                }
                else if(str[i+1][j+1]=='x'&&str[i+2][j+2]=='.')
                {
                    flag=true;
                    break;
                }
            }
            if(str[i][j]=='x')
            {
                if(str[i][j+1]=='.'&&str[i][j+2]=='x')
                {
                    flag=true;
                    break;
                }
                else if(str[i-1][j]=='.'&&str[i-2][j]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i][j-1]=='.'&&str[i][j-2]=='x')
                {
                    flag=true;
                    break;
                }
                else if(str[i-1][j-1]=='.'&&str[i-2][j-2]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j]=='.'&&str[i+2][j]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i-1][j+1]=='.'&&str[i-2][j+2]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j-1]=='.'&&str[i+2][j-2]=='x')
                {
                    flag=true;
                    break;
                }
              else  if(str[i+1][j+1]=='.'&&str[i+2][j+2]=='x')
                {
                    flag=true;
                    break;
                }
            }
            if(str[i][j]=='.')
            {
                if(str[i][j+1]=='x'&&str[i][j+2]=='x')
                {
                    flag=true;
                    break;
                }
                else if(str[i-1][j]=='x'&&str[i-2][j]=='x')
                {
                    flag=true;
                    break;
                }
               else  if(str[i][j-1]=='x'&&str[i][j-2]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i-1][j-1]=='x'&&str[i-2][j-2]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j]=='x'&&str[i+2][j]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i-1][j+1]=='x'&&str[i-2][j+2]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j-1]=='x'&&str[i+2][j-2]=='x')
                {
                    flag=true;
                    break;
                }
               else if(str[i+1][j+1]=='x'&&str[i+2][j+2]=='x')
                {
                    flag=true;
                    break;
                }
            }

        }

    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
