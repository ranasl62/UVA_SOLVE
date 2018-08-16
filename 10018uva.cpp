#include<iostream>

using namespace std;
long long reverse (long long number)
{
    long long temp=0;
    while(number)
    {
        temp=temp*10+number%10;
        number/=10;
    }
    return temp;
}
bool palindrome (long long temp)
{
    long long number = reverse (temp);
    if(temp==number) return true;
    return false ;
}
int main()
{
    //freopen("10018uva.txt","w",stdout);
    int n;
    long long number ,temp;// not more than  4294967295;
    cin>>n;
    while(n--)
    {
        cin>>number;
        int t=0;
        while(t<1000)
        {
            t++;
            temp=number+reverse(number);
            if(palindrome (temp))
            {
                cout<<t<<" "<<temp<<endl;
                break;
            }
            number = temp;
        }
    }
    return 0;
}
