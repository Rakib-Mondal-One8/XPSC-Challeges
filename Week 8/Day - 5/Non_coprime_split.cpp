#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
bool is_prime(int val)
{
    for (int i = 2; i * i <= val; i++)
    {
        if (val % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        ll ans = -1;
        if (l == r)
        {
            if (is_prime(l) && is_prime(r))
            {
                cout << -1 << nl;
                continue;
            }
            else
            {
                int v1, v2;
                for (int i = 2; i * i <= r; i++)
                {
                    if (r % i == 0)
                    {
                        v1 = i;
                        v2 = r - i;
                        break;
                    }
                }
                cout << v1 << " " << v2 << nl;
                continue;
            }
        }
        loop(i, l, r)
        {
            if (i % 2 == 0 && (i / 2 != 1))
            {
                ans = (i / 2);
                break;
            }
        }
        if (ans != -1)
            cout << ans << " " << ans << nl;
        else
            cout << ans << nl;
    }
    return 0;
}