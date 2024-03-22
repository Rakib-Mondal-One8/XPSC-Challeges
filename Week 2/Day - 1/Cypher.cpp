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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<pair<int, string>> step(n);
        for (int i = 0; i < n; i++)
        {
            int val;
            string s;
            cin >> val >> s;
            step[i] = {val, s};
        }
        for (int i = 0; i < n; i++)
        {
            int x = step[i].first;
            string s = step[i].second;
            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'D')
                {
                    if (v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
                else
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                        v[i]--;
                }
            }
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}