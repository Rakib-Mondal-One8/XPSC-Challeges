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
    multiset<long long> ml;
    
    int l = 0, r = 0;
    long long ans = 0, sum = 0;
    while (r < n)
    {
        ml.insert(a[r]);
        long long mx, mn;
        mx = *ml.rbegin();
        mn = *ml.begin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mx = *ml.rbegin();
                mn = *ml.begin();
                if (mx - mn <= k)
                {
                    ans += (r - l + 1);
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}