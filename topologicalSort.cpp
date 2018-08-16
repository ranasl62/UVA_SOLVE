#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Pair
{
    int a, b;
    Pair(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
};

ostream &operator<<(ostream &out, const Pair &p)
{
    return p.print(out);
}

struct topological_pair_comparator
{
    bool operator()(const Pair &p, const Pair &q) const
    {
        return p.a<q.a && p.b<q.b;
    }
} tpc;



    Pair(1,1),
    Pair(1,2),
    Pair(2,1),
    Pair(3,1),
    Pair(1,3),
    Pair(5,5),
    Pair(2,2),
    Pair(4,0);

int main()
{
    std::sort(pairs.begin(), pairs.end(), tpc);
    for(const Pair &p : pairs) cout << p << " ";
    cout <<endl;
    return 0;
}
