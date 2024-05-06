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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n), mn = {31};
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        loop(i, 1, q)
        {
            int x;
            cin >> x;
            if (x < mn.back()) // when xi < other x values then other operation does not effect the value.
            // so we can ignore them all
                mn.push_back(x);
        }
        loop(i, 0, n - 1)
        {
            for (int val : mn)
            {
                int y = pow(2, val);
                if ((a[i] % y) == 0)
                {
                    a[i] += (1 << val - 1);
                }
            }

            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}
