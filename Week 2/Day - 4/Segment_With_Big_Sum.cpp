#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long l = 0, r = 0, ans = INT_MAX;
    long long sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum >= k)
        {
            ans = min(ans, (r - l + 1));
            while (sum >= k && l <= r)
            {
                ans = min(ans, (r - l + 1));
                sum -= a[l];
                l++;
            }
        }
        r++;
    }
    if (ans == INT_MAX)
    {
        cout << "-1\n";
        return 0;
    }
    cout << ans << '\n';
    return 0;
}