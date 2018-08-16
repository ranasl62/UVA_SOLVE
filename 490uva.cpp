#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    vector<string>arr;
    int mx=0;
    while(getline(cin,str))
    {
        mx=max(mx,(int)str.length());
        arr.push_back(str);
    }
    for(int j=0; j<mx; j++)
    {
        for(int k=arr.size()-1; k>=0; k--)
        {
            if(j<arr[k].length())
                printf("%c",arr[k][j]);
            else
                printf("%c",32);
        }
        printf("\n");
    }
    return 0;
}
