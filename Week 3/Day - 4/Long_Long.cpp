#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
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
        ll totalSum = 0;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            totalSum += abs(a[i]);
        }
        ll r = 0;
        ll steps = 0;
        bool flag = false;
        while (r < n)
        {
            if (a[r] < 0)
            {
                while (r < n && a[r] <= 0)
                {
                    flag = true;
                    r++;
                }
            }
            if (flag)
            {
                flag = false;
                steps++;
            }

            r++;
        }
        cout << totalSum << " " << steps << nline;
    }
    return 0;
}