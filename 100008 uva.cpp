#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
int arr[26];
struct Frequency
{
    int v;
    int c;
    void Set(int a,int b)
    {
        v=a;
        c=b;
    }
} Fre[26];
Frequency Sort(int *p)
{
    int temp;
    for(int i=0; i<*p; i++)
    {
        for(int j=1; j<*p-i; j++)
        {
            if(Fre[j].v>Fre[j-1].v)
            {
               temp=Fre[j].v;
               Fre[j].v=Fre[j-1].v;
               Fre[j-1].v=temp;
               temp=Fre[j].c;
               Fre[j].c=Fre[j-1].c;
               Fre[j-1].c=temp;
            }
        }
    }
    for(int j=1; j<*p; j++)
    {
        if(Fre[j].v==Fre[j-1].v && Fre[j].c<Fre[j-1].c )
            {
               temp=Fre[j].v;
               Fre[j].v=Fre[j-1].v;
               Fre[j-1].v=temp;
               temp=Fre[j].c;
               Fre[j].c=Fre[j-1].c;
               Fre[j-1].c=temp;
            }
    }
    for(int i=0; i<*p; i++)
    cout<<char(Fre[i].c)<<" "<<Fre[i].v<<endl;
}
int main()
{
    freopen("10008uva.txt","w",stdout);
    string Str;
    int t;
    cin>>t;
    getline(cin,Str);
    while(t--)
    {
        getline(cin,Str);
        for(int i=0; i<Str.length(); i++)
            if(isalpha(Str[i]))
                arr[(toupper(Str[i]))-'A']++;
    }
    int p=0;
    for(int i=0; i<26; i++)
    {
        if(arr[i]!=0)
        {
            Fre[p++].Set(arr[i],i+65);
        }
    }

            Sort(&p);

    return 0;
}
