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

    int n, p;
    cin >> n >> p;

    vector<int> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    auto ok = [&](ll time)
    {
        ll totpro = 0;
        loop(i, 0, n - 1)
        {
            totpro += (time/a[i]);
            if(totpro>=p)
                return true;
        }
        return false;
    };
    ll l = 1, r = 1e18;
    ll ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << nl;

    return 0;
}