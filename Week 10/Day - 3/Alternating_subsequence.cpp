#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define pi pair<int, int>
#define pll pair<ll, ll>
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbdms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
int nXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    loop(i, 0, n - 1)
    {
        cin >> a[i];
    }
    int nidx = -1;
    int pidx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < 0)
            nidx = i;
        else
            pidx = i;
    }
    pll res = {0, LLONG_MIN};
    loop(i, 1, 2)
    {
        ll len = 0;
        ll ans = 0;
        if ((i == 1) && (nidx != -1))
        {
            while (nidx < n)
            {
                bool ok1 = false;
                ll mx = LLONG_MIN;
                while ((nidx < n) && (a[nidx] < 0))
                {
                    mx = max(mx, a[nidx]);
                    nidx++;
                    ok1 = true;
                }
                if (ok1)
                {
                    // cout << mx << " ";
                    ans += mx;
                    len++;
                }
                mx = LLONG_MIN;
                bool ok2 = false;
                while ((nidx < n) && (a[nidx] > 0))
                {
                    mx = max(mx, a[nidx]);
                    nidx++;
                    ok2 = true;
                }
                if (ok2)
                {
                    // cout << mx << " ";
                    ans += mx;
                    len++;
                }
            }
            if (res.first < len)
            {
                res.first = len;
                res.second = ans;
            }
        }
        else if (pidx != -1)
        {
            while (pidx < n)
            {
                bool ok1 = false, ok2 = false;
                ll mx = LLONG_MIN;
                while ((pidx < n) && (a[pidx] > 0))
                {
                    mx = max(mx, a[pidx]);
                    pidx++;
                    ok1 = true;
                }
               
                if (ok1)
                {
                    // cout << mx << " ";
                    ans += mx;
                    len++;
                }
                mx = LLONG_MIN;
                while ((pidx < n) && (a[pidx] < 0))
                {
                    mx = max(mx, a[pidx]);
                    pidx++;
                    ok2 = true;
                } 
                if (ok2)
                {
                    // cout << mx << " ";
                    ans += mx;
                    len++;
                }
            }
            if (res.first == len)
            {
                res.second = max(res.second, ans);
            }
            else if (res.first < len)
            {
                res.first = len;
                res.second = ans;
            }
        }
    }
    cout << res.second << nl;
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