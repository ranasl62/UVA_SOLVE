#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    vector<string>S;
    vector<string>R;
    string ss;
    int n;
    cin>>n;
    cin.ignore();
    string str;
    for(int i=0; i<n; i++)
    {
        getline(cin,str);
        ss="";
        for(int j=0; j<str.length(); j++)
        {
            //cout<<"l"<<endl;
            if(str[j]==' ')
            {
               //cout<<"R"<<endl;
                S.push_back(ss);
               ss="";
            }
            else ss+=str[j];
        }
        S.push_back(ss);
        int c=0;
        for(int k=2; k<S.size(); k++)
        {
            for(int t=k+1;t<S.size();t++){
                if(S[t].size()>S[k].size()){
                   for(int h=0;h<S[t].size()-S[k].size();h++)
                   {
                       if(S[k]==S[t].substr(h,(S[k].size()+h))){
                       S.erase(S.begin()+k);break;
                       }
                   }

                }
                else{
                    for(int h=0;h<S[k].size()-S[t].size();h++)
                   {
                       if( S[t]==S[k].substr( h ,(S[t].size()+h) ) ){
                       S.erase(S.begin()+t);break;
                       }
                   }
                }
            }
        }
         cout<<S[0]<<" "<<S.size()-2;
       for(int r=2;r<S.size();r++)
       {
           cout<<" "<<S[r];

       }
       cout<<endl;
        S.clear();
    }
    return 0;
}
