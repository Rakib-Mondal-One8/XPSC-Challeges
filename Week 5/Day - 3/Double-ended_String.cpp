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
        string a, b;
        cin >> a >> b;

        int n = a.size();
        int m = b.size();

        int lcs[n + 1][m + 1];
        loop(i, 0, n)
        {
            loop(j, 0, m)
            {
                if (i == 0 || j == 0)
                {
                    lcs[i][j] = 0;
                }
            }
        }
        int mx = INT_MIN;
        loop(i, 1, n)
        {
            loop(j, 1, m)
            {
                if (a[i - 1] == b[j - 1])
                {
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                }
                else
                    lcs[i][j] = 0;
                mx = max(mx, lcs[i][j]);
            }
        }
        cout << ((n - mx) + (m - mx)) << nl;
    }
    return 0;
}