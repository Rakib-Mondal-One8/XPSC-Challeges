#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        // vector<int> PrefixOr(n);
        // PrefixOr[0] = a[0];
        // loop(i, 1, n - 1)
        // {
        //     PrefixOr[i] = (PrefixOr[i - 1] | a[i]);
        // }
        int l = 0, r = 0;
        int Odd = 0;
        ll ans = 0;
        while (r < n)
        {
            if (a[r] % 2 != 0)
            {
                Odd++;
            }
            if ((r - l + 1) == k)
            {
                if (Odd > 0)
                {
                    ans++;
                }
                if (a[l] % 2 != 0)
                {
                    Odd--;
                }
                l++;
            }
            r++;
        }
        cout << ans << nline
    }
    return 0;
}