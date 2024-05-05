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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for (int i = n - 1; i >= 0 && a[i] >= 0; i -= k)
        {
            ans += a[i];
        }
        for (int i = 0; i < n && a[i] < 0; i += k)
        {

            ans += abs(a[i]);
        }
        cout << 2 * ans - max(abs(a[0]), abs(a[n - 1])) << nl;
    }
    return 0;
}