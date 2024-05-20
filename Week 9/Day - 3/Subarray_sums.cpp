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
    vector<ll> a(n);
    ll sum = 0;
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        while (r < n && sum < x)
        {
            sum += a[r];
            r++;
        }
        while (l <= r && sum > x)
        {
            sum -= a[l];
            l++;
        }
        if (sum == x)
        {
            ans++;
            sum -= a[l];
            l++;
        }
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