#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("424uva.txt","w",stdout);
    char Str[101][101];
    int i=0;
    char sum[105];
    int temp=0,p=0;
    while(cin>>Str[i++])
    {
        int len = strlen(Str[0]);
        if(Str[i-1][0]=='0')
        {
            for(int k=len-1; k>=0; k--)
            {
                for(int j=i-2; j>=0; j--)
                {
                    temp += int (Str[j][k] -'0');
                }
                char a =char(temp%10+'0');
                sum[p++] = a;
                temp/=10;
            }
            if(temp>0 && 10>temp)
            {
                char a = char(temp%10+'0');
                sum[p++]=a;
            }
            else
            {
                while(temp)
                {
                    char a = char(temp%10+'0');
                    sum[p++]=a;
                    temp/=10;
                }
            }
            break;
        }

    }
    for(int i=0; i<p/2; i++)
        swap(sum[i],sum[p-i-1]);
    string abc(sum);
    cout<<abc<<endl;
    return 0;
}
