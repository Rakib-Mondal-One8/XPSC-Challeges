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
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int curr = 0;
            if (i - 1 >= 0)
                curr = max(curr, abs(a[i] - a[i - 1]));
            if (i + 1 < n)
                curr = max(curr, abs(a[i] - a[i + 1]));
            ans = min(ans, curr);
        }
        cout << ans << nl;
    }
    return 0;
}