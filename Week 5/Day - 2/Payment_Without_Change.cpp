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
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int req1 = s / n;
        if (req1 <= a)
        {
            s -= req1 * n;
        }
        else
        {
            s -= a * n;
        }
        s -= b;

        if (s <= 0)
            Yes;
        else
            No;
    }
    return 0;
}