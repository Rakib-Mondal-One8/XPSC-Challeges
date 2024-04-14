#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
const ll N = 32768;
vector<int> allPal;
void palindrome()
{
    for (int i = 0; i < N; i++)
    {
        string s = to_string(i);
        string tmp = s;
        reverse(tmp.begin(), tmp.end());

        if (tmp == s)
            allPal.push_back(i);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    palindrome();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        unordered_map<int, int> mp;
        ll ans = 0;
        loop(i, 0, n - 1)
        {
            mp[a[i]]++;
            for (auto x : allPal)
            {
                // if (mp.find(a[i] ^ x) != mp.end())
                // {
                //     ans += mp[a[i] ^ x];
                // }
                ans += mp[a[i] ^ x];
            }
        }
        cout << ans << nl;
    }
    return 0;
}