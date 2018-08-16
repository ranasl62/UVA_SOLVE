#include<bits/stdc++.h>
using namespace std;
int main()
{
    string temp;
    cin>>temp;
    set <string> s;

     for(int i=0;i<temp.size();i++)
    {
        s.insert(temp);
        temp=temp[temp.length()-1]+temp.substr(0,temp.length()-1);
    }
    cout<<s.size()<<endl;


    return 0;
}
