#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define pi pair<int, int>
#define pll pair<ll, ll>;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbdms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
int nXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------*/
class cmp
{
public:
    bool operator()(const pi &a, const pi &b)
    {
        if (a.first != b.first)
        {
            return a.first < b.first;
        }
        else
        {
            return a.second > b.second;
        }
    }
};
void solve()
{
    int t;
    cin >> t;
    int n = 1;
    queue<pi> m;
    priority_queue<pi, vector<pi>, cmp> p;
    set<int> mark;
    while (t--)
    {
        int q;
        cin >> q;

        if (q == 1)
        {
            int v;
            cin >> v;
            m.push({v, n});
            p.push({v, n});
            n++;
        }
            else if (q == 2)
            {
                while (true)
                {
                    if (mark.find(m.front().second) != mark.end())
                    {
                        m.pop();
                    }
                    else
                    {

                        break;
                    }
                }
                cout << (m.front().second) << " ";
                mark.insert(m.front().second);
                m.pop();
            }
            else
            {
                while (true)
                {
                    if (mark.find(p.top().second) != mark.end())
                    {

                        p.pop();
                    }
                    else
                    {

                        break;
                    }
                }
                cout << (p.top().second) << " ";
                mark.insert(p.top().second);
                p.pop();
            }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
