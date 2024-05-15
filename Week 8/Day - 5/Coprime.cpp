#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
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
        map<int, int> a;
        vector<int> mxidx(1005, -1);
        loop(i, 0, n - 1)
        {
            int val;
            cin >> val;
            a[val] = i + 1;
            if ((i + 1) > mxidx[val])
            {
                mxidx[val] = i + 1;
            }
        }
        int ans = -1;
        loop(i, 1, 1000)
        {
            loop(j, 1, 1000)
            {
                if (__gcd(i, j) == 1)
                {
                    if ((mxidx[i] != -1) && (mxidx[j] != -1))
                        ans = max(ans, (mxidx[i] + mxidx[j]));
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}