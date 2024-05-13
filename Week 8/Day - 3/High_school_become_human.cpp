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

    ll x, y;
    cin >> x >> y;
    double lhs = (y * log(x));
    double rhs = (x * log(y));
    if (lhs > rhs)
        cout << ">" << nl;
    else if (lhs < rhs)
        cout << "<" << nl;
    else
        cout << "=" << nl;
    return 0;
}