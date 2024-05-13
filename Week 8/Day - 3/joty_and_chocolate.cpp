#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
ll lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll aocc = (n / a), bocc = (n / b);
    ll it, sameocc = 0;

    it = lcm(a, b); // calculating the path where both a and b with step

    for (ll i = it; i <= n; i += it)
    {
        sameocc++;
    }
    if (p >= q)
    {
        bocc -= sameocc;
    }
    else if (q > p)
    {
        aocc -= sameocc;
    }
    ll res = (aocc * p) + (bocc * q);
    cout << res << nl;
    return 0;
}