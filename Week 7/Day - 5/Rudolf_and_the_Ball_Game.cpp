#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        vector<pair<int, char>> op(m + 1);
        loop(i, 1, m)
        {
            int stp;
            char direction;
            cin >> stp >> direction;
            op[i] = {stp, direction};
        }
        set<int> s;
        s.insert(x);
        loop(i, 1, m)
        {
            set<int> new_set;
            while (!s.empty())
            {
                int stp = op[i].first;
                int dir = op[i].second;
                if (dir == '?')
                {
                    int initial = *s.begin();
                    s.erase(initial);
                    int pos1 = (initial + n + stp) % n;
                    int pos2 = (initial + n - stp) % n;
                    if (pos1 != 0)
                        new_set.insert(pos1);
                    else
                        new_set.insert(n);
                    if (pos2 != 0)
                        new_set.insert(pos2);
                    else
                        new_set.insert(n);
                }
                else if (dir == '0')
                {
                    int initial = *s.begin();
                    s.erase(initial);
                    int pos = (initial + n + stp) % n;
                    if (pos != 0)
                        new_set.insert(pos);
                    else
                        new_set.insert(n);
                }
                else
                {
                    int initial = *s.begin();
                    s.erase(initial);
                    int pos = (initial + n - stp) % n;
                    if (pos != 0)
                        new_set.insert(pos);
                    else
                        new_set.insert(n);
                }
            }
            s = new_set;
        }
        cout << s.size() << nl;
        for (auto it : s)
        {
            cout << it << " ";
        }
        cout << nl;
    }
    return 0;
}