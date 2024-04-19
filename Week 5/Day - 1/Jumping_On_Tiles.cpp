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

        map<char, vector<int>> mp;
        int n = s.size();
        loop(i, 0, n - 1)
        {
            mp[s[i]].push_back(i);
        }
        vector<int> path;
        // if s[n-1] is smaller than s[0] then i have to go reverse
        // else i have to go forward
        int d = (s[0] < s[n - 1]) ? 1 : -1;
        for (char c = s[0]; c != s[n - 1] + d; c += d)
        {
            for (int p : mp[c])
            {
                path.push_back(p);
            }
        }
        int cost = 0;
        // Finally i have to calculate the total cost of the charcater sequence through which i can go to my destination
        loop(i, 1, path.size() - 1)
        {
            cost += abs(s[path[i]] - s[path[i - 1]]);
        }
        cout << cost << " " << path.size() << nl;
        for (int p : path)
        {
            cout << p + 1 << " ";
        }
        cout << nl;
    }
    return 0;
}