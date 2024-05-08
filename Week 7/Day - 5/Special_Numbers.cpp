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

    int t;
    cin >> t;
    ll MX = 1e9 + 7;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        ll ans = 0;
        ll val = 1;
        loop(i, 0, 31)
        {
            if ((k >> i) & 1)
            {
                ans = (ans + val) % MX;
            }
            val *= n;
            val%=MX;
        }
        cout << ans << nl;
    }
    return 0;
}