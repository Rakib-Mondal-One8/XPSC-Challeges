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
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, bool> mp;
        int duplicate = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mp.find(a[i]) != mp.end())
            {
                duplicate++;
            }
            else
            {
                mp.insert({a[i], true});
            }
        }
        int ans = n - duplicate;
        if (duplicate % 2 == 0)
        {
            cout << ans << '\n';
        }
        else
        {
            cout<<ans-1<<'\n';
        }
    }
    return 0;
}