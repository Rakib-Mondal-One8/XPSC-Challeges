#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define for(i, s, n) for (int i = s; i <= n; i++)
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
        pair<int, int> mxVal = {0, 0};
        for (i, 0, n - 1)
        {
            cin >> a[i];
            if (mxVal.first < a[i])
            {
                mxVal = {a[i], i};
            }
        }
        for (i, 0, n - 1)
        {
            for (j, 0, n - 1)
            {
                a[i] &= a[j];
            }
        }
        cout<<a[mxVal.second]<<nl
    }
    return 0;
}
