#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long x,b,p;

    cin >> n;
    while(n--)
    {
        cin >> x;

        {
        b=0;
        p=2;
        for(int i=1; i<x; i++)
        {
            b=b+p;
            p*=2;
        }

        }
        cout << b / 12 / 1000 << " kg" << endl;
    }
    return 0;
}
