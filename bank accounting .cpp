#include<iostream>
#include<cstring>
using namespace std;
class user
{
    string f_name,l_name,name,user,pass,sex;
    int date,month,year;
    int balance,withdraw,diposit;
public :
    void set(int d, int m, int y)
    {
        date=d;
        month=m;
        year=y;
    }
    void set1(char s)
    {
        if(s =='f'||s=='F')
            sex="Female";
        if(s =='m'||s=='M')
            sex="Male";
    }
};

int main()
{
    int n,a,b,c,d,e,f;
    user account[100];
    while(1)
    {
        cout<<"Press valid key to access our service "<<endl;

         cin>>n;
        while(a)
        {

        }
    }


    return 0;
}
