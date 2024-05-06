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
        cin >> n;

        vector<int> a;
        int ok = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            int cnt = ok + (!a.empty() && a.back() > x);
            if (cnt == 0 || (cnt == 1 && x <= a[0]))
            {
                a.push_back(x);
                ok = cnt;
                cout << '1';
            }
            else
                cout << '0';
        }
        cout << nl;
    }
    return 0;
}
