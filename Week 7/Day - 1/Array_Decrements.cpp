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

        vector<int> a(n), b(n);
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        loop(i, 0, n - 1)
        {
            cin >> b[i];
        }
        int overall = 1e9 + 9;
        bool ok = false;
        bool greater = false;
        loop(i, 0, n - 1)
        {
            if (a[i] < b[i])
                greater = true;
            if (b[i] != 0)
            {
                overall = min(overall, a[i] - b[i]);
            }
        }
        loop(i, 0, n - 1)
        {
            if (b[i] != 0 && (a[i] - b[i]) != overall)
            {
                ok = true;
                break;
            }
            else
            {
                if ((a[i] - b[i]) > overall)
                {
                    ok = true;
                    break;
                }
            }
        }
        if (ok || greater)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}