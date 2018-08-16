#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,f,k,x,cnt=0;
   double c=0.5;
   scanf("%64Id%64Id%64Id%64Id",&a,&b,&f,&k);
   x=b;
   b=b-f;
   bool t=true;
   if(b<0){cout<<-1<<endl;return 0;}
    for(int i=0;i<k;i++)
    {
        if(t && 2*(a-f)>b)
        {
            b=x;
            c++;
            b-=2*(a-f);
            c+=1.0;
            cnt++;
            t=false;
            if(b<0){cout<<-1<<endl;return 0;}
            if((long long) (floor(c))==k)break;
            if((long long) (ceil(c))==k)
            {
                cout<<c<<endl;
                return 0;
            }

        }
        else if(t && 2*(a-f)<=b)
        {
            b-=2*(a-f);
            c+=1.0;
            if(b<0){cout<<-1<<endl;return 0;}
            if((long long) floor(c)==k)break;
            if((long long) ceil(c)==k)
            {
                cout<<c<<endl;
                return 0;
            }

        }
        if(!t && 2*f>b)
        {
            b=x;
            c++;
            b-=2*f;
            c+=1.0;
            cnt++;
            t=false;
            if(b<0){cout<<-1<<endl;return 0;}
            if((long long) floor(c)==k)break;
            if((long long) ceil(c)==k)
            {
                cout<<c<<endl;
                return 0;
            }
        }
        else
        {
            b-=2*(a-f);
            c+=1.0;
            if(b<0){cout<<-1<<endl;return 0;}
            if((long long) floor(c)==k)break;
            if((long long) ceil(c)==k)
            {
                cout<<c<<endl;
                return 0;
            }
        }


    }
    cout<<cnt<<endl;
    return 0;
}
