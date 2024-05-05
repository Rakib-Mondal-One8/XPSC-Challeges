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
        string s;
        cin >> n >> s;

        int mn = INT_MAX;
        loop(i, 1, 2)
        {
            pair<char, int> del = {'0', 0};
            bool ok = true;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (s[l] != s[r])
                {
                    if (del.first == '0')
                    {
                        if (i == 1)
                        {
                            del.first = s[l];
                            // del.second++;
                        }
                        else
                        {
                            del.first = s[r];
                            // del.second++;
                        }
                    }
                    else if (s[l] == del.first)
                    {
                        del.second++;
                        l++;
                    }
                    else if (s[r] == del.first)
                    {
                        del.second++;
                        r--;
                    }
                    else
                    {
                        del.second = 1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            if (del.second != 1e9)
                mn = min(mn, del.second);
        }
        if (mn != INT_MAX)
            cout << mn << nl
        else
            cout << -1 << nl;
    }
    return 0;
}