#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
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

        vector<pair<int, int>> a;
        vector<pair<int, int>> b;
        vector<pair<int, int>> c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c.push_back({x, i});
        }
        sort(a.begin(), a.end(), greater<pair<int, int>>());
        sort(b.begin(), b.end(), greater<pair<int, int>>());
        sort(c.begin(), c.end(), greater<pair<int, int>>());
        int ans = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if ((a[i].second != b[j].second) && (b[j].second != c[k].second))
                    {
                        if (a[i].second != c[k].second)
                            ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << ans << nline
    }
    return 0;
}