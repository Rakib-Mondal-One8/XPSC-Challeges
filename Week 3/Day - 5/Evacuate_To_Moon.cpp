#include <bits/stdc++.h>
typedef long long int ll;
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
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
        int n, m, tm;
        cin >> n >> m >> tm;

        vector<ll> a(n);
        vector<ll> b(m);

        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        loop(i, 0, m - 1)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        ll ans = 0;
        ll mx = min(n, m);
        loop(i, 0, mx - 1)
        {
            ll op1 = b[i] * tm;
            ll op2 = a[i];
            ans += min(op2, op1);
        }
        cout << ans << '\n';
    }
    return 0;
}

