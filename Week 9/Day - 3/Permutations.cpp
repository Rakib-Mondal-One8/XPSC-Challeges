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
    int n;
    cin >> n;
    if (n > 1 && n <= 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    set<int> s;
    loop(i, 1, n)
    {
        s.insert(i);
    }
    vector<int> ans(n);
    int fst = n / 2;
    fst += (n % 2);
    s.erase(s.find(fst));
    ans[0] = fst;
    loop(i, 1, n - 1)
    {
        if (i % 2)
        {
            int mx = *s.rbegin();
            ans[i] = mx;
            s.erase(s.find(mx));
        }
        else
        {
            int mn = *s.begin();
            ans[i] = mn;
            s.erase(s.find(mn));
        }
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}