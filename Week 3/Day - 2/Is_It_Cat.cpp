#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string cat = "meow";
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'M' || s[i] == 'E' || s[i] == 'O' || s[i] == 'W')
            {
                s[i] += 32;
            }
        }
        // cout << s << '\n';
        // map<char, int> mp;
        // string ans = "";
        // for (int i = 0; i < n; i++)
        // {
        //     if (mp.find(s[i]) == mp.end())
        //     {
        //         mp[s[i]] = 1;
        //         ans += s[i];
        //     }
        // }
        s.erase(unique(s.begin(), s.end()), s.end());

        (cat == s) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}