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
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            No;
            continue;
        }
        if (b < 3)
        {
            b = 3;
        }
        Yes;
        cout << a << " " << (a * b - a) << " " << a * b << nl;
    }
    return 0;
}