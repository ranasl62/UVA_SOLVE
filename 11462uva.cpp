#include<iostream>

using namespace std;
int main()
{

    int n,age;
    while(cin>>n)
    {
        if(n==0)break;
        int arr[110];
        for(int i=0; i<110; i++) // this loop only for set array every index value equal to Zero
            arr[i]=0;
        for(int i=0; i<n; i++)
        {
            cin>>age;
            arr[age]=arr[age]+1; //count number of age are same
        }
        bool a = false;
        for(int i=1; i<110; i++)
        {
            if(arr[i]>0)
            {
                while(arr[i]--)
                {
                    if(a==false) // This condition only for print 1st age
                        cout<<i;
                    else
                        cout<<" "<<i; // This condition only for print every condition without 1st age
                    a=true;
                }
            }
        }
        cout<<endl;

    }

    return 0;
}
