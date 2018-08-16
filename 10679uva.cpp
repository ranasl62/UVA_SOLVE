#include<iostream>
#include<string>

using namespace std;
int main()
{
    string S,T;
    int q,t,p;
    cin>>p;
    while( p-- && cin>>S )
    {
        int sizes=S.size();
        cin>>q;
        while(q--)
        {
            t=0;
            cin>>T;
            int Size = T.size();
            for(int i=0; i<sizes; i++)
                if(T==S.substr(i,Size))
                {
                    t=1;
                    cout<<"y"<<endl;
                    break;
                }
            if(t==0)
                cout<<"n"<<endl;
        }
    }
    return 0;
}
