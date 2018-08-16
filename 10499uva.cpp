#include<iostream>
using namespace std;
int main()
{
    long long N;
    while(cin>>N && N>0){
        if(N==1)cout<<0<<"%"<<endl;
        else cout<<N*25<<"%"<<endl;
    }
    return 0;
}
