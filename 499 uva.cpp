#include<iostream>
#include<cstdio>
using namespace std;
int arr[123];
int main()
{
   // freopen("499uva.txt","w",stdout);

    string Str;
    while(getline(cin,Str))
    {

        for(int i=0; i<Str.length(); i++)
            if(isalpha(Str[i]))
                arr[((Str[i]))]++;
    int Max=arr[65];
    for(int i=66;i<123;i++)
        if(arr[i]>Max)
        Max=arr[i];
    for(int i=65;i<123;i++)
        if(Max==arr[i])
        cout<<char(i);
    cout<<" "<<Max<<endl;
    for(int i=65;i<123;i++)
        arr[i]=0;
    }
    return 0;
}
