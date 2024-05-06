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

        vector<bool> mark(s.size());
        stack<int> up;
        stack<int> low;
        loop(i, 0, s.size() - 1)
        {
            if (s[i] != 'B' && s[i] != 'b')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    up.push(i);
                }
                else
                {
                    low.push(i);
                }
            }
            else
            {
                if (s[i] == 'B')
                {
                    mark[i] = true;
                    if (!up.empty())
                    {
                        int idx = up.top();
                        up.pop();
                        mark[idx] = true;
                    }
                }
                else
                {
                    mark[i] = true;
                    if (!low.empty())
                    {
                        int idx = low.top();
                        low.pop();
                        mark[idx] = true;
                    }
                }
            }
        }
        loop(i, 0, s.size() - 1)
        {
            if (!mark[i])
            {
                cout << s[i];
            }
        }
        cout << nl;
    }
    return 0;
}