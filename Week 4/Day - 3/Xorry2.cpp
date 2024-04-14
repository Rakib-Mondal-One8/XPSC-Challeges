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
        int x;
        cin >> x;
        int cnt = 0, tmp1 = 0, tmp2;
        while (x != 0)
        {
            if ((x & 1) == 0)
            {
                cnt++;
                tmp1++;
            }
            if ((x & 1) == 1)
            {
                tmp2 = tmp1;
                tmp1 = 0;
            }
            x = x >> 1;
        }
        int res = pow(2, (cnt - tmp2));
        cout << res << nl;
    }
    return 0;
}