#include <bits/stdc++.h>
typedef long long ll;
#define pi pair<int, int>;
#define pll pair<ll, ll>;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
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

//---------------------------------------------------------------------------------------------------------------------------------------
int smallest_div(int v)
{
    for (int i = 2; i <= v; i++)
        if (v % i == 0)
            return i;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a[1005]; // list
    vector<int> res(n + 1);
    loop(i, 0, n - 1)
    {
        int val;
        cin >> val;
        a[smallest_div(val)].push_back(i);
    }
    int colour = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (a[i].size())
        {
            colour++;
            for (int v : a[i])
            {
                res[v] = colour;
            }
        }
    }
    cout << colour << nl;
    loop(i, 0, n - 1)
    {
        cout << res[i] << " ";
    }
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
