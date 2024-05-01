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

    string s, req;
    cin >> s >> req;
    int n = s.size();
    vector<int> v(n);
    loop(i, 0, n - 1)
    {
        cin >> v[i];
    }
    auto ok = [&](int mid)
    {
        vector<bool> del(n + 1);
        loop(i, 0, mid - 1)
        {
            del[v[i]] = true;
        }
        int j = 0;
        bool found = false;
        loop(i, 0, n - 1)
        {
            if (s[i] == req[j] && !del[i + 1])
            {
                j++;
            }
            if (j == req.size())
            {
                found = true;
                break;
            }
        }
        return found;
    };
    int l = 0, r = n;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << nl;
    return 0;
}