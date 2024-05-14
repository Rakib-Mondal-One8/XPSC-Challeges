#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
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
        int a, b, l;
        cin >> a >> b >> l;

        set<int> ans;
        loop(i, 0, 34)
        {
            bool ok = false;
            int x = l;
            for (int j = 0; j < i; j++)
            {
                if (x % a)
                {
                    ok = true;
                    break;
                }
                x /= a;
            }
            if (ok)
                break;
            while (true)
            {
                ans.insert(x);
                if (x % b)
                    break;
                x /= b;
            }
        }
        cout << ans.size() << nl;
    }
    return 0;
}