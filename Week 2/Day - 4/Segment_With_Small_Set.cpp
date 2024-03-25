#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<long long> ml;
    long long l = 0, r = 0, ans = 0, cnt = 0;
    while (r < n)
    {
        int val = a[r];
        if (ml.find(val) == ml.end())
        {
            cnt++;
        }
        ml.insert(val);
        if (cnt <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            
            while(cnt > k)
            {
                int val = a[l];
                ml.erase(ml.find(val));
                l++;
                if (ml.find(val) == ml.end())
                {
                    cnt--;
                }
            }
            ans+=(r-l+1);
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}

