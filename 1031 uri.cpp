#include <iostream>
using namespace std;
int josephus(int n, int k)
{
    if (n == 1) return 1;
    cout  << josephus(n, k) << endl;
    return ((josephus(n - 1, k) + k - 1) % n) + 1;
}
int main()
{
    unsigned int k, n;
    int c=0, q;
    cin >> q;
    while (++c <= q)
    {
        cin >> n >> k;
        josephus(n, k);
    }
    return 0;
}
