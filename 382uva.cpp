#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    long long sum;
    vector<int>a;
    int i=0;
    int data;
    while(cin>>data)
    {
        a.push_back(data);
        if(!data)
            break;
    }
    int k=0;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(1)
    {
        sum=0;
        if(a[k]==0)
        {

            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        for(int i=1; i<a[k]; i++)
            if(a[k]%i==0)
                sum+=i;
        if(sum>a[k])
            printf("%5d  ABUNDANT\n",a[k]);
        else if(sum<a[k])
            printf("%5d  DEFICIENT\n",a[k]);
        else
            printf("%5d  PERFECT\n",a[k]);
        k++;

    }
    return 0;
}
