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

        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }

        int ans = 0;
        loop(k, 1, n)
        {
            multiset<int> ml(a.begin(), a.end());
            loop(i, 1, k)
            {
                auto val = ml.upper_bound(k - i + 1);
                // auto val = ml.find(k - i + 1);
                if (val == ml.begin())
                    break;
                ml.erase(--val);
                // ml.erase(val);
                if (!ml.empty())
                {
                    int mn = *ml.begin();
                    ml.erase(ml.begin());
                    ml.insert(mn + k - i + 1);
                }
            }
            if (ml.size() + k == n)
            {
                ans = k;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
