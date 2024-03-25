#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> v(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long l = 0, r = 0, ans = 0;
    long long sum = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > k && l < r)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}