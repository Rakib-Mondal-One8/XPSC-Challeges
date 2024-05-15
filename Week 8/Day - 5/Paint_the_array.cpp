#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
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
        int n;
        cin >> n;
        vector<ll> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        ll Gcd1 = a[0];
        ll Gcd2 = a[1];
        for (int i = 2; i < n; i += 2)
        {
            Gcd1 = __gcd(Gcd1, a[i]);
        }
        for (int i = 3; i < n; i += 2)
        {
            Gcd2 = __gcd(Gcd2, a[i]);
        }
        bool ok = true;
        for (int i = 1; i < n; i += 2)
        {
            if ((a[i] % Gcd1) == 0)
            {
                ok = false;
                break;
            }
        }
        bool ok2 = true;
        for (int i = 0; i < n; i += 2)
        {
            if ((a[i] % Gcd2) == 0)
            {
                ok2 = false;
                break;
            }
        }
        if (ok)
        {
            cout << Gcd1 << nl;
        }
        else if (ok2)
        {
            cout << Gcd2 << nl;
        }
        else
            cout << 0 << nl;
    }
    return 0;
}