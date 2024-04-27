#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll l = 1, r = 2e9, m;
    ll ans = 0;

    auto ok = [&](ll m)
    {
        ll totalop = 0;
        loop(i, n / 2, n - 1)
        {
            totalop += a[i] < m ? (m - a[i]) : 0;
        }
        return totalop <= k;
    };
    while (l <= r)
    {
        m = l + (r - l + 1) / 2;
        if (ok(m))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << ans << nl;

    return 0;
}