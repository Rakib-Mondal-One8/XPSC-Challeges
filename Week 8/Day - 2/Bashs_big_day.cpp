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

    int x;
    cin >> x;
    if (x == 1)
    {
        cout << 1 << nl;
        return 0;
    }
    vector<int> a(x);
    ll sum = 0;
    map<int, int> pf;
    loop(i, 0, x - 1)
    {
        cin >> a[i];
        sum += a[i];
        int n = a[i];
        map<int, bool> cnt;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    if (!cnt[i])
                    {
                        pf[i]++;
                        cnt[i] = true;
                    }
                    n /= i;
                }
            }
        }
        if (n > 1)
            pf[n]++;
    }
    if (sum == x)
    {
        cout << 1 << nl;
        return 0;
    }
    ll ans = INT_MIN;
    for (auto gcd : pf)
    {
        ans = max(ans, 1LL * gcd.second);
    }
    cout << ans << nl;
    return 0;
}