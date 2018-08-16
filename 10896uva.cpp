#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int arr[123];
int main()
{
    // freopen("499uva.txt","w",stdout);

    string Str,Temp;
    int k,i;
    while(getline(cin,Str))
    {
        while(1)
        {
            int j=0;
                cin>>Temp;
            for( i=0; i<26; i++)
            {
                int a=int(Str[i]+i);
                if(a>122)
                {
                    a-=26;
                }
                Str[j++]=char(a);
            }
            if (Str.find(Temp) != string::npos)
            {
                cout<<char(i+97)<<endl;
                break;
            }
        }

    }
    return 0;
}
