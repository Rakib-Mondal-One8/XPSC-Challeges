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
        bool ok = true;
        map<int, int> cnt;
        loop(i, 0, n - 1)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    while (a[i] % j == 0)
                    {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
            }
            if (a[i] > 1)
                cnt[a[i]]++;
        }
        for (auto val : cnt)
        {
            if ((val.second % n) != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            Yes;
        else
            No;
    }
    return 0;
}