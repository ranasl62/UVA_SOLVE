#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("test.txt","r",stdin);
    string str;
    int arr[26];
    cin>>str;
    if(str.length()<26)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        int a=0;
        int k=97;
        for(int i=0;i<str.length();i++){
            if(k>=str[i]&& k<='z')
            {
                a++;
                k++;
            }

        }
        if(a>=26){
            cout<<"abcdefghijklmnopqrstuvwxyz"<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}

