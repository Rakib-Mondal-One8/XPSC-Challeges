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
        int n;
        cin >> n;

        vector<string> s(n);
        map<string, bool> mp;
        loop(i, 0, n - 1)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        bool possible = false;
        string ans = "";
        loop(i, 0, n - 1)
        {
            int x = s[i].size();
            loop(j, 1, x - 1)
            {
                string s1 = s[i].substr(0, j);
                string s2 = s[i].substr(j, x - j);
                if (mp[s1] && mp[s2])
                {
                    possible = true;
                }
            }
            if (possible)
                ans += "1";
            else
                ans += "0";
            possible = false;
        }
        cout << ans << '\n';
    }
    return 0;
}