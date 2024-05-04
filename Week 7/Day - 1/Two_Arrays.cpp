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
        bool ok = true;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        loop(i, 0, n - 1)
        {
            if (a[i] != b[i] && a[i] + 1 != b[i]){
                ok = false;
                break;
            }
        }
        (ok) ? Yes : No;
    }
    return 0;
}