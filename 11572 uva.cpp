#include <cstdio>
#include<iostream>
#include <map>
using namespace std;

int id[1000001];

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        map<int, int> last;

        scanf("%d", &n);

        int ans = 0, begin = 1;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &id[i]);

            if (last[id[i]] >= begin)
            {
                cout<<last[id[i]] << " "<<begin<< "  " <<ans<<" " <<id[i]<<endl;;
                begin = last[id[i]] + 1;
            }
            last[id[i]] = i;
            ans = (i - begin + 1) > ans ? (i - begin + 1) : ans;

        }
        printf("%d\n", ans);
    }
    return 0;
}
