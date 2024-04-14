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

        vector<ll> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        // vector<ll> bx;
        // for (int i = 0; i < n; i++)
        // {
        //     bool ok = false;

        //     for (auto &x : bx)
        //     {
        //         if (a[i] <= x)
        //         {
        //             x ^= a[i];
        //             ok = true;
        //             break;
        //         }
        //     }

        //     if (!ok)
        //     {
        //         bx.push_back(a[i]);
        //     }
        // }
        // cout << bx.size() << nl;
        int l = 0, r = n - 1;
        ll bx = 1;
        ll Xor = a[0];
        while (l < r)
        {
            if (Xor >= a[r])
            {
                Xor ^= a[r];
                r--;
            }
            else
            {
                Xor = a[l];
                l++;
                bx++;
            }
        }
        cout << bx << nl;
    }
    return 0;
}
