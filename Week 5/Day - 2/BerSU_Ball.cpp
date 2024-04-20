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

    int n;
    cin >> n;

    multiset<int> ml1, ml2;
    loop(i, 0, n - 1)
    {
        int x;
        cin >> x;
        ml1.insert(x);
    }
    int m;
    cin >> m;
    loop(i, 0, m - 1)
    {
        int x;
        cin >> x;
        ml2.insert(x);
    }
    int cnt = 0;
    while (!ml1.empty() && !ml2.empty())
    {
        int v1 = *ml1.rbegin();
        int v2 = *ml2.rbegin();

        if (abs(v1 - v2) <= 1)
        {
            cnt++;
            ml1.erase(ml1.find(v1));
            ml2.erase(ml2.find(v2));
        }
        else
        {
            if (v1 > v2)
                ml1.erase(ml1.find(v1));
            else
            {
                ml2.erase(ml2.find(v2));
            }
        }
    }
    cout << cnt << nl;

    return 0;
}