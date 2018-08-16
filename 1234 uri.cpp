#include <bits/stdc++.h>
using namespace std;
int main()
{
   char a[100];
   int i,j;
   while(cin.getline(a,50))
   {
       i=0;
       j=0;
       while(a[i]!='\0')

            if(a[i]==' ')
           {
               cout<<a[i];
               i++;
           }
           else if(j%2==0)
           {
            cout<<char(toupper(a[i]));
            i++;
            j++;
           }
           else
           {
               cout<<char (tolower(a[i]));
               i++;
               j++;
           }
       }
       cout<<endl;


    return 0;
}
