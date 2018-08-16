#include<bits/stdc++.h>
using namespace std;
int main()

{
    string str;
    int n;
    cin>>n;
    cin>>str;
    int A,C,G,T;
    A=C=G=T=0;
    if(n%4==0)
    {
        for(int i=0; i<n; i++)
        {
            if(str[i]=='A')
                A++;
            else if (str[i]=='C')
                C++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='T')
                T++;

        }
//cout<<n/4<<" "<<A<<" "<<C<<" "<<G<<" "<<T;
        if(n/4>=A && n/4>=C && n/4>=G && n/4>=T)
        {
            int i=0;
            A=n/4-A;
            C=n/4-C;
            G=n/4-G;
            T=n/4-T;
            while(i<=n)
            {

                if(A && str[i]=='?')
                {
                    str[i++]='A';
                    A--;
                }
                if(C && str[i]=='?')
                {
                    str[i++]='C';
                    C--;
                }
                if(G && str[i]=='?')
                {
                    str[i++]='G';
                    G--;
                }
                if(T && str[i]=='?')
                {
                    str[i++]='T';
                    T--;
                }
                if(str[i]!='?')
                    i++;
               // if(i+1==n)break;
            }
            cout<<str<<endl;
        }
        else cout<<"==="<<endl;
    }
    else
    {
        cout<<"==="<<endl;

    }
    return 0;
}
