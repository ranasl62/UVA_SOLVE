#include<iostream>
#include <algorithm>

int n;
using namespace std;

int main()
{
    string Str,Temp;
    int t;
    cin>>t;
    int p=0,i=0;
    n=t;
    string arr[t];
   getline(cin,Str);
    while(t>p)
    {
        getline(cin,Str);
        Temp = "" ;
        i=0;
        if(Str[i] == ' ')
        {
            while(1)
            {
                if(Str[i++]!=' ')
                    break;
            }
            i--;
            while (1)
            {
                if(Str[i]==' ')
                    break;
                Temp+=Str[i++];
            }
        }
        else
            while (1)
            {
                if(Str[i]==' ')
                    break;
                Temp+=Str[i++];
            }
            arr[p]=Temp;
            p++;
}
   sort(arr,arr+p);
 i=0;
   p=-1;
   while(t>i)
   {
       if(arr[i]!=arr[i+1])
       {

           cout<<arr[i]<<" "<<i-p<<endl;
           p=i;
       }
       i++;
   }

    return 0;
}
