#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
bool is_prime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
ll nextPrime(ll n)
{
    if (n <= 1)
        return 2;
    ll prime = n;
    bool ok = false;
    while (!ok)
    {
        prime++;
        if (is_prime(prime))
            ok = true;
    }
    return prime;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll d;
        cin >> d;
        ll p1 = nextPrime(d);
        ll p2 = nextPrime(p1 + d-1);
        cout << p1 * p2 << nl;
    }
    return 0;
}
