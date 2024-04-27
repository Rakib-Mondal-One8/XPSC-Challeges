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
        int n, w;
        cin >> n >> w;

        vector<ll> a(n), prefix(n);
        ll mx = LLONG_MIN;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            mx = max(a[i], mx);
        }
        sort(a.begin(), a.end());
        prefix[0] = a[0];
        loop(i, 1, n - 1)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        ll have = ((a[n - 1] * n) - prefix[n - 1]);
        if (have < w)
        {
            ll want = (w - have);
            ll columns = ((want) / n) + a[n - 1];
            cout << columns << nl;
        }
        else
        {
            ll l = 0, r = mx;
            while (l < r)
            {
                ll mid = l + (r - l + 1) / 2;
                ll total = 0;
                for (int i = 0; i < n; i++)
                {
                    total += max(mid - a[i], 0LL);
                }
                if (total <= w)
                    l = mid;
                else
                    r = mid - 1;
            }
            cout << l << nl;
        }
    }
    return 0;
}