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
        vector<int> a(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        if (a[0] % 2 == 0)
        {
            No;
            continue;
        }
        bool ok = false;
        int clr = 1;
        int idx = 1, div = 3;
        while (idx < n)
        {
            if (a[idx] % div == 0)
            {
                bool f = false;
                for (int i = 1; i <= clr; i++)
                {
                    if ((a[idx] % (div - i)) != 0)
                    {
                        f = true;
                        break;
                    }
                }
                if (!f)
                {
                    ok = true;
                    break;
                }
                else
                {
                    div += 1;
                    clr += 1;
                    idx++;
                }
            }
            else
            {
                div++;
                clr++;
                idx++;
            }
        }
        if (ok)
            No;
        else
            Yes;
    }
    return 0;
}