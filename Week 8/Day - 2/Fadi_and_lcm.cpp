#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    pair<ll, ll> ans = {INT_MAX, INT_MAX};
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll val1 = n / i;
            ll val2 = i;
            if (lcm(val1, val2) == n)
            {
                ans = {val1, val2};
            }
        }
    }
    cout << ans.first << " " << ans.second << nl;
    return 0;
}