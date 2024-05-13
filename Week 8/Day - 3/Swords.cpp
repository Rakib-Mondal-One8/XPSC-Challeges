#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    vector<ll> a(x);
    map<ll, ll> cnt;
    ll mx = INT_MIN, seg = 0;
    ll sum = 0;
    loop(i, 0, x - 1)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    ll Gcd = (mx - a[0]);
    loop(i, 1, x - 1)
    {
        Gcd = __gcd(Gcd, mx - a[i]);
    }
    ll ans = ((mx * x) - sum) / Gcd;
    cout << ans << " " << Gcd << nl;
    return 0;
}