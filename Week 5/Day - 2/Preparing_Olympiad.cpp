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

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> a(n);
    loop(i, 0, n-1)
    {
        cin >> a[i];
    }
    int cnt = 0;

    for(int i=0;i<(1<<n);i++)
    {
        int mxRating = INT_MIN, mnRating = INT_MAX;
        int totalRating = 0;
        for(int j=0;j<n;j++)
        {
            if (i & (1 << j))
            {
                mnRating = min(mnRating, a[j]);
                mxRating = max(mxRating, a[j]);
                totalRating += a[j];
            }
            
        }
        if (totalRating >= l && totalRating <= r && mxRating - mnRating >= x)
        {
            cnt++;
        }
    }
    cout << cnt << nl;
    return 0;
}
