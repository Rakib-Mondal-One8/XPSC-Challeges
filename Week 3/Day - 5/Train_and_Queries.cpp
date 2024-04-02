#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
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
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        map<int, multiset<int>> mp;
        loop(i, 0, n - 1)
        {
            cin >> a[i];
            mp[a[i]].insert(i);
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;

            if (mp.find(a) != mp.end() && mp.find(b) != mp.end())
            {
                auto idx1 = *mp[a].begin();
                auto idx2 = *mp[b].rbegin();
                if (idx2 > idx1)
                {
                    cout << "YES\n";
                }
                else
                    cout << "NO\n";
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}