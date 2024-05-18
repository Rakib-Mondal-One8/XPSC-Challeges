#include <bits/stdc++.h>
typedef long long ll;
#define pi pair<int, int>;
#define pll pair<ll, ll>;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
bool isPrime(ll n)
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
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
/*--------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> point(k + 1);
    vector<ll> time(k + 1);
    point[0] = 0;
    time[0] = 0;
    loop(i, 1, k)
    {
        cin >> point[i];
    }
    loop(i, 1, k)
    {
        cin >> time[i];
    }
    while (q--)
    {
        ll des;
        cin >> des;
        int l = 0, r = k;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (point[mid] > des)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (point[r] == des)
        {
            cout << time[r] << " ";
            continue;
        }
        ll res = time[r] /*prev time*/ + (des - point[r]) * (time[r + 1] - time[r]) / (point[r + 1] - point[r]);
        cout << res << " ";
    }
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}