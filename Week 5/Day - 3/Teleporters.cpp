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
        ll n, c;
        cin >> n >> c;

        vector<ll> a;
        loop(i, 1, n)
        {
            ll x;
            cin >> x;
            a.push_back(x + i);
        }
        sort(a.begin(), a.end(), greater<ll>());
        int cnt = 0;
        while (c > 0 && !a.empty())
        {
            if (a.back() <= c)
            {
                cnt++;
                c -= a.back();
            }
            a.pop_back();
        }
        cout << cnt << nl;
    }
    return 0;
}