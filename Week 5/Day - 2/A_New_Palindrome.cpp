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
        string s;
        cin >> s;

        map<char, int> mp, mark;
        int cnt = 0;
        loop(i, 0, s.size() - 1)
        {
            mp[s[i]]++;
            if (!mark[s[i]] && mp[s[i]] >= 2)
            {
                mark[s[i]] = true;
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            Yes;
        }
        else
            No;
    }
    return 0;
}