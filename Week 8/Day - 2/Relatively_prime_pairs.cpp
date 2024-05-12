#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
const ll N = 1e9;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;

    ll pairs = (r - l + 1) / 2;
    vector<pair<ll, ll>> p;
    ll idx = l;
    while (idx < r)
    {
        p.push_back({idx, idx + 1});
        idx += 2;
    }
    if (!p.empty() && p.size() >= pairs)
    {
        Yes;
        loop(i, 1, pairs)
        {
            cout << p.back().first << " " << p.back().second << nl;
            p.pop_back();
        }
    }
    else
        No;
    return 0;
}