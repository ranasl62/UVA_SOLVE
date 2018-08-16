
#include<iostream>
using namespace std;
int main()
{
    int n_h,n_m,a_h,a_m,r_h,r_m;
    while(cin>>n_h>>n_m>>a_h>>a_m)
    {
        if(n_h==0&&n_m==0&&a_h==0&&a_m==0)
            break;
        r_h=a_h-n_h;
        r_m=a_m-n_m;

        if(r_m<0)
        {
            r_m+=60;
            r_h--;
        }
        if(r_h<0)
        {
            r_h+=24;
        }

        cout<<r_h*60+r_m<<endl;
    }
    return 0;
}
