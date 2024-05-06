#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> a;
        map<int, int> mp;
        map<int, int> freq;
        loop(i, 0, n - 1)
        {
            int val;
            cin >> val;
            a.insert(val);
            freq[val]++;
        }
        for (auto it : a)
        {
            for (int x = it; x <= n; x += it)
            {
                mp[x] += freq[it];
            }
        }
        int mxAns = 0;
        for (auto it : mp)
        {
            mxAns = max(mxAns, it.second);
        }
        cout << mxAns << nl;
    }
    return 0;
}