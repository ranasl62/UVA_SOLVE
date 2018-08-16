#include<bits/stdc++.h>
using namespace std;
vector<long long >usb;
vector<long long >ps2;
int main()
{
    freopen("text.txt","r",stdin);
    long long a,b,c;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    scanf("%d %d %d",&a,&b,&c);
    char str[5];
    long long n,m,sum=000;
    cin>>m;
    while(m--)
    {
        scanf("%I64d %s",&n,&str);
        if(str[0]=='U') usb.push_back(n);
        else  ps2.push_back(n);
    }

    sort(usb.begin(),usb.end());
    sort(ps2.begin(),ps2.end());
    long long i=0;
    long long j=0;
    long long u=usb.size();
    long long p=ps2.size();
    //int usz = usb.size(), psz = pst.size();
    int cnt = 0, ucnt = 0, pcnt = 0;
    lli cost = 0;
    for(int i = 0; i < u && i < u; i++){
        ucnt++;
        cost += usb[i];
    }
    for(int i = 0; i < p && i < p; i++){
        pcnt++;
        cost += pst[i];
    }

    cnt = ucnt + pcnt;
    lli ucom, pcom;
    for(int i = 0; i < b; i++){
        if(ucnt < usz){
            ucom = usb[ucnt];
        }
        else{
            ucom = inf;
        }
        if(pcnt < psz){
            pcom = pst[pcnt];
        }
        else{
            pcom = inf;
        }
        if(ucom == inf && pcom == inf){
            break;
        }
        else{
            cnt++;
            if(ucom < pcom){
                ucnt++;
                cost += ucom;
            }
            else{
                pcnt++;
                cost += pcom;
            }
        }
    }

    prr(cnt, cost);

}
    return 0;
}
