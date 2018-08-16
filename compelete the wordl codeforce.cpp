#include<iostream>
#include<string>
using namespace std;
int arr[26],arr2[26],arr3[26];
int main()
{
    string Str;
    int c,p=0;
    while(cin>>Str)
    {
        for(int i=0;i<26;i++)
        {
            arr[i]=arr2[i]=arr3[i]=0;
        }
        c=0;
        p=0;
        int t=0,k=0;
        for(int i=0;i<Str.length();i++)
        if(Str[i]!='?'&& arr[Str[i]-'A']!=1)
        {
            arr[Str[i]-'A']=1;
            c++;
        }
        else
        {
            arr2[t++]=i;
            p++;
        }
        for(int i=0;i<26;i++)
        {
            if(!arr[i])
            {
                arr3[k++]=i+65;
            }

        }
            if(c+p>=26)
            {
                p=0;
               for(int i=0;i<Str.length();i++)
               {
                   if(k==p)
                    break;
                   Str[arr2[i]]=char(arr3[p++]);
               }
               cout<<Str<<endl;

            }
            else
            {
                cout<<-1<<endl;

            }
    }
    return 0;
}
