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
    string s;
    cin >> s;
    map<pi, vector<int>> cnt;
    pi ulp = {0, 0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            cnt[{0, 1}].push_back(i);
            ulp = {ulp.first + 0, ulp.second + 1};
        }
        else if (s[i] == 'S')
        {
            cnt[{0, -1}].push_back(i);
            ulp = {ulp.first + 0, ulp.second - 1};
        }
        else if (s[i] == 'E')
        {
            cnt[{1, 0}].push_back(i);
            ulp = {ulp.first + 1, ulp.second + 0};
        }
        else
        {
            cnt[{-1, 0}].push_back(i);
            ulp = {ulp.first - 1, ulp.second + 0};
        }
    }
    if (n == 2)
    {
        if (abs(ulp.first) == abs(ulp.second))
            No;
        else
            cout << "RH\n";
    }
    else if ((ulp.first % 2) || (ulp.second % 2))
    {
        No;
    }
    else
    {
        vector<char> ans(n, 'H');
        int f = ulp.first / 2;
        int s = ulp.second / 2;
        if (f == 0 && s == 0)
        {
            if ((cnt.find({1, 0}) != cnt.end() && cnt.find({-1, 0}) != cnt.end()))
            {
                ans[cnt[{1, 0}][0]] = 'R';
                ans[cnt[{-1, 0}][0]] = 'R';
            }
            else if ((cnt.find({0, 1}) != cnt.end() && cnt.find({0, -1}) != cnt.end()))
            {

                ans[cnt[{0, -1}][0]] = 'R';
                ans[cnt[{0, 1}][0]] = 'R';
            }
        }
        else
        {
            loop(i, 0, abs(f) - 1)
            {
                if (f > 0)
                    ans[cnt[{1, 0}][i]] = 'R';
                else
                    ans[cnt[{-1, 0}][i]] = 'R';
            }
            loop(i, 0, abs(s) - 1)
            {
                if (s > 0)
                    ans[cnt[{0, 1}][i]] = 'R';
                else
                    ans[cnt[{0, -1}][i]] = 'R';
            }
        }
        for (auto r : ans)
        {
            cout << r;
        }
        cout << nl;
    }
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