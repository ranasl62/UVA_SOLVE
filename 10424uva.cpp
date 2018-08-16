#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    freopen("out.txt","w",stdout);
    string str,str1;
    int person1,person2;
    int sum1,sum2;

    while(cin>>str>>str1)
    {
        person1=person2=0;
        sum1=sum2=0;
        for(int i=0; str[i]; i++)
            if(isalpha(str[i]))
                person1+=(int)(toupper(str[i])-64);
        for(int i=0; str1[i]; i++)
            if(isalpha(str1[i]))
                person2+=(int)(toupper(str1[i])-64);
        //cout<<person1<< " "<<person2<<endl;

        while(true)
        {
            sum1+=person1%10;
            person1/=10;
            if(sum1>=10 && person1==0) person1=sum1,sum1=0;
            if(sum1<10 && person1==0) break;
        }
        while(true)
        {
            sum2+=person2%10;
            person2/=10;
            if(sum2>=10 && person2==0) person2=sum2,sum2=0;
            if(sum2<10 && person2==0) break;
        }
        double mn = min(sum1,sum2);
        double mx = max(sum1,sum2);
        printf("%.2lf %%\n",(mn/mx)*100.0);
    }
    return 0;
}
