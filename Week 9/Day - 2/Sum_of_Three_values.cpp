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
/*--------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    map<int, vector<int>> mp;
    loop(i, 0, n - 1)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    loop(i, 0, n - 1)
    {
        loop(j, 0, n - 1)
        {
            if (i != j)
            {
                ll val = (a[i] + a[j]);
                ll need = x - val;
                if (mp.find(need) != mp.end())
                {
                    for (auto it : mp[need])
                    {
                        if (it != i && it != j)
                        {
                            cout << i + 1 << " " << j + 1 << " " << it + 1 << nl;
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}