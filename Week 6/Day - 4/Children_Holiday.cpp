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

    int m, n;
    cin >> m >> n;

    vector<tuple<ll, ll, ll>> a(n);
    loop(i, 0, n - 1)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }
    vector<ll> inflate(n);
    auto ok = [&](int mid)
    {
        vector<ll> work(n);
        ll has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<ll, ll, ll> T = a[i];
            ll t, z, y;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            ll fullseg = ((t * z) + y); // Full segment
            ll can = (mid / fullseg);   // Can infalte this ballons on that segments of that perticular time
            ll rem = mid % fullseg;     // remaining time
            ll total = ((can * z) + min(z, (rem / t)));
            total = min(has, total);
            has -= (total);
            work[i] = total;
        }
        if (!has)
        {
            loop(i, 0, n - 1)
            {
                inflate[i] = work[i];
            }
        }
        return (!has);
    };
    ll l = 1, r = 1e18;
    int ans;
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
    for (auto val : inflate)
    {
        cout << val << " ";
    }
    cout << nl;
    return 0;
}