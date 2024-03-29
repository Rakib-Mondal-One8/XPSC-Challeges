#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        vector<int> prefix(n+1,0);
        long long total = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            total += a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
       
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            
            long long tsum = total;
            tsum+=(r-l+1)*k;
            tsum -= (prefix[r] - prefix[l-1]);
            // cout<<tsum<<'\n';
            if (tsum % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}