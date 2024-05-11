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

    ll n, k;
    cin >> n >> k;
    vector<ll> div;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if ((n / i) != i)
                div.push_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    if (k <= div.size())
    {
        cout << div[k - 1] << " ";
    }
    else
        cout << -1 << nl;
    return 0;
}