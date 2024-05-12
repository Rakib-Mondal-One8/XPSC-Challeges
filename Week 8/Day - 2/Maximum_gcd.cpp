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
        int n;
        cin >> n;

        int mx = 0;
        for (int i = 1; i*2 <= n; i++)
        {
            if ((i * 2) <= n)
                mx = max(mx, i);
        }
        cout << mx << nl;
    }
    return 0;
}