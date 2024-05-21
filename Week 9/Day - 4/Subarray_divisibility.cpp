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
    ll n;
    cin >> n;
    vector<ll> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    unordered_map<ll, ll> cnt;
    ll prefix = 0;
    cnt[0] = 1;
    ll ans = 0;
    loop(i, 0, n - 1)
    {
        prefix += a[i];
        prefix %= n;
        while (prefix < 0) // Because ai can be -Ve
            prefix += n;
        if (cnt.find(prefix) != cnt.end())
            ans += cnt[prefix];
        cnt[prefix]++;
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}