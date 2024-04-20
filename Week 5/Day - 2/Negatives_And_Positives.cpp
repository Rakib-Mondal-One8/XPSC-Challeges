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

        vector<ll> a(n);
        int nega = 0;
        int posi = 0;
        ll sum = 0;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            sum += a[i];
            (a[i] < 0) ? nega++ : posi++;
        }
        sort(a.begin(), a.end());
        ll sum2 = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            int v1 = a[i];
            int v2 = a[i + 1];
            if (v1 < 0 && v2 < 0)
            {
                sum2 += abs(v1);
                sum2 += abs(v2);
            }
            else if (v1 < 0 && v2 >= 0)
            {
                if (abs(v1) > v2)
                {
                    sum2 += abs(v1);
                    sum2 -= v2;
                }
                else
                {
                    sum2 += v1;
                    sum2 += v2;
                }
            }
            else
            {
                sum2 += v1;
                sum2 += v2;
            }
        }
        if (n % 2 != 0)
            sum2 += a[n - 1];
        (sum > sum2) ? cout << sum << '\n' : cout << sum2 << '\n';
    }
    return 0;
}