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
    pbds<ll> s1, s2;
    unordered_map<ll, ll> cnt;
    // CSES Inversion
    for (int i = n - 1; i >= 0; i--)
    {
        cnt[a[i]] += s1.order_of_key(a[i]);
        s1.insert(a[i]);
    }
    /*
    Implimenting inversion on inversions (i<j<k)&(a[i]>a[j]>a[k]);
    so firstly calculating the inversions for j&k and after that
    simply we are calculating inversions for i and adding i*inversions of j&k to answer
    */
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll boro = s2.size() - s2.order_of_key(a[i] + 1);
        if (boro > 0)
            ans += boro * cnt[a[i]];
        s2.insert(a[i]);
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}