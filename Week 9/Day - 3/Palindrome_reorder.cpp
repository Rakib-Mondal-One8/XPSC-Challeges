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
    string s;
    cin >> s;
    int sz = s.length();
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    vector<char> ans(sz);
    vector<pair<int, char>> a;
    pair<char, int> odd;
    for (auto it : mp)
    {
        if (it.second % 2)
        {
            odd.second++;
            odd.first = it.first;
        }
        else
            a.push_back({it.second, it.first});
    }
    if (odd.second > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        sort(a.begin(), a.end());
        int l = 0, r = sz - 1;
        while (!a.empty())
        {
            auto v = a.back();
            a.pop_back();
            int dist = v.first / 2;
            while (dist--)
            {
                ans[l] = v.second;
                ans[r] = v.second;
                l++;
                r--;
            }
        }
        while (mp[odd.first]--)
        {
            ans[l] = odd.first;
            l++;
        }
        loop(i, 0, sz - 1)
        {
            cout << ans[i];
        }
        cout << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}