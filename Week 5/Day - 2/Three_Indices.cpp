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

        vector<int> a(n);
        vector<int> ans;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            int val = a[i];
            pair<int, int> mn1;
            mn1.first = INT_MAX;
            pair<int, int> mn2;
            mn2.first = INT_MAX;
            for (int j = 0; j < i; j++)
            {
                if (a[j] < mn1.first)
                {
                    mn1 = {a[j], j + 1};
                }
            }
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < mn2.first)
                {
                    mn2 = {a[j], j + 1};
                }
            }
            if ((val > mn1.first) && (val > mn2.first))
            {
                ans.push_back(mn1.second);
                ans.push_back(i + 1);
                ans.push_back(mn2.second);
                break;
            }
            if(!ans.empty())
                break;
        }
        // sort(ans.begin(), ans.end());
        if (!ans.empty())
        {
            Yes;
            for (int val : ans)
            {
                cout << val << " ";
            }
            cout << nl;
        }
        else
        {
            No;
        }
    }
    return 0;
}