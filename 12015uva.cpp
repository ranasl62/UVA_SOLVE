#include<iostream>
#include<cstdio>
using namespace std;
struct Google
{
    int rel;
    string url;
}data[10];
int main()
{
    freopen("12015uva.txt","w",stdout);
    int n,p=0;
    cin>>n;
    while(n--)
    {
        p++;
        for(int i=0;i<10;i++)
        {
            cin>>data[i].url>>data[i].rel;
        }
      for(int i=0;i<10;i++)
      {
          for(int j=1+i;j<10;j++)
            if(data[i].rel<data[j].rel)
          {
              swap(data[i].rel,data[j].rel);
              swap(data[i].url,data[j].url);
          }
      }

      cout<<"Case #"<<p<<":"<<endl;
       cout<<data[0].url<<endl;
       for(int i=0;i<10;i++)
        if(data[i].rel==data[i+1].rel)
            cout<<data[1+i].url<<endl;
        else
            break;

    }
    return 0;
}
