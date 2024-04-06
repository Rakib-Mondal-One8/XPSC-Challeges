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
        int n;
        cin >> n;

        vector<ll> a(n);
        multiset<ll> ml;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            ml.insert(log2(a[i])); // Remove the type name "ll"
        }

        vector<ll> comb(35, 0);
        for (auto val : ml)
        {
            comb[val]++;
        }
        ll ans = 0;
        loop(i, 0, 34)
        {
            if (comb[i] > 0)
            {
                ans += (comb[i] * (comb[i] - 1)) / 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
