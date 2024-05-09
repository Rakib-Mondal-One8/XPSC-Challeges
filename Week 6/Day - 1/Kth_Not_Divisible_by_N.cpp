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

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        auto ok = [&](int mid)
        {
            return (mid - (mid) / n) >= k;
        };
        ll l = 1, r = 2e9;
        ll ans = 0;
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
    }
    return 0;
}