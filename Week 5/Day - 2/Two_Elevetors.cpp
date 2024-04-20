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
        int a, b, c;
        cin >> a >> b >> c;

        int first = abs(a - 1);
        int second = abs(b - c) + abs(c - 1);

        if (first == second)
        {
            cout << 3 << nl;
        }
        else if (first > second)
        {
            cout << 2 << nl;
        }
        else
            cout << 1 << nl;
    }
    return 0;
}