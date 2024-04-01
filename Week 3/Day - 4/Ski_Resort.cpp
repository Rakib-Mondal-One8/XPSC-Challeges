#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        loop(i, 0, n-1)
        {
            cin >> a[i];
        }
        ll r = 0;
        ll ans = 0;
        ll window = 0;
        while (r < n)
        {
            if (a[r] <= q)
            {
                window += 1;
            }
            else
            {
                if (window >= k)
                {
                    ans += ((window - k + 1) * (window - k + 2)) / 2;
                }
                window = 0;
            }
            r++;
        }
        if (window >= k)
        {
            ans += ((window - k + 1) * (window - k + 2)) / 2;
        }
        cout << ans << nline
    }
    return 0;
}